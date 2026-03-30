#!/usr/bin/env bash
# Start or reattach to the LiteX container, mounting the current folder as the workspace.
#
# Behavior:
# - If the image doesn't exist, build it.
# - If a container with the chosen name is running, open a shell inside it.
# - If it exists but is stopped, start and attach to it (mounts persist from creation).
# - Otherwise, create a new container mounting $(pwd) to /workspace.
#
# Env vars (optional):
#   IMAGE          Image name (default: litex-env)
#   CONTAINER_NAME Container name (default: litex-dev)
#   WORKDIR        Workdir inside container (default: /workspace)
#   HOST_DIR       Host dir to mount (default: current directory)
#
# Hostname policy: always use hostname 'el3310' (not configurable)
#
# Flags:
#   --clean        Remove existing container with the chosen name, then create a new one on next run
#   --rebuild      Force rebuild of the image before starting
set -euo pipefail

IMAGE=${IMAGE:-litex-env}
CONTAINER_NAME=${CONTAINER_NAME:-litex-dev}
WORKDIR=${WORKDIR:-/workspace}
HOST_DIR=${HOST_DIR:-"$(pwd)"}

usage() {
  echo "Usage: $0 [--clean] [--rebuild]" >&2
}

CLEAN=no
REBUILD=no
HOSTNAME_REQUIRED="el3310"

while [ $# -gt 0 ]; do
  case "$1" in
    --clean) CLEAN=yes ;;
    --rebuild) REBUILD=yes ;;
    -h|--help) usage; exit 0 ;;
    *) echo "Unknown option: $1" >&2; usage; exit 2 ;;
  esac
  shift
done

if [ "$CLEAN" = "yes" ]; then
  docker rm -f "$CONTAINER_NAME" >/dev/null 2>&1 || true
  echo "Removed container $CONTAINER_NAME"
fi

if [ "$REBUILD" = "yes" ]; then
  echo "Rebuilding image $IMAGE ..."
  docker build -t "$IMAGE" .
fi

# Build if image missing
if ! docker image inspect "$IMAGE" >/dev/null 2>&1; then
  echo "Image $IMAGE not found. Building..."
  docker build -t "$IMAGE" .
fi

# If a container with this name exists, ensure hostname matches; otherwise recreate
if docker ps -a --format '{{.Names}}' | grep -Fxq "$CONTAINER_NAME"; then
  EXISTING_HOSTNAME=$(docker inspect -f '{{.Config.Hostname}}' "$CONTAINER_NAME" 2>/dev/null || echo "")
  if [ "$EXISTING_HOSTNAME" != "$HOSTNAME_REQUIRED" ]; then
    echo "Existing container $CONTAINER_NAME has hostname '$EXISTING_HOSTNAME' (expected '$HOSTNAME_REQUIRED'). Recreating..."
    docker rm -f "$CONTAINER_NAME" >/dev/null 2>&1 || true
  else
    # Hostname is correct; attach
    if docker ps --format '{{.Names}}' | grep -Fxq "$CONTAINER_NAME"; then
      echo "Container $CONTAINER_NAME is running (hostname $HOSTNAME_REQUIRED). Opening shell..."
      exec docker exec -it -w "$WORKDIR" "$CONTAINER_NAME" /bin/bash
    else
      echo "Starting existing container $CONTAINER_NAME (hostname $HOSTNAME_REQUIRED)..."
      exec docker start -ai "$CONTAINER_NAME"
    fi
  fi
fi

# Otherwise, create new with bind mount
echo "Creating container $CONTAINER_NAME (hostname $HOSTNAME_REQUIRED) and mounting $HOST_DIR -> $WORKDIR"
exec docker run -it \
  --name "$CONTAINER_NAME" \
  --hostname "$HOSTNAME_REQUIRED" \
  -v "$HOST_DIR":"$WORKDIR" \
  -w "$WORKDIR" \
  "$IMAGE"
