#!/usr/bin/env bash
# Build the Docker image defined by the local Dockerfile.
# Usage: ./build.sh [--platform linux/amd64|linux/arm64] [--tag litex-env]
# Examples:
#   ./build.sh
#   ./build.sh --platform linux/amd64
#   ./build.sh --tag my-litex
# Env vars override flags: IMAGE (tag), PLATFORM
set -euo pipefail

# Note: Hostname is enforced at runtime by start.sh (el3310). Building does not set hostname.
IMAGE=${IMAGE:-litex-env}

# Auto-detect platform if not provided
PLATFORM=${PLATFORM:-}


while [ $# -gt 0 ]; do
  case "$1" in
    --tag) IMAGE=$2; shift ;;
    --platform) PLATFORM=$2; shift ;;
    -h|--help)
      echo "Usage: $0 [--platform linux/amd64|linux/arm64] [--tag litex-env]"; exit 0 ;;
    *) echo "Unknown option: $1" >&2; exit 2 ;;
  esac
  shift
done

# If PLATFORM is still empty, auto-detect
if [ -z "$PLATFORM" ]; then
  ARCH=$(uname -m)
  case "$ARCH" in
    x86_64|amd64)
      PLATFORM="linux/amd64" ;;
    arm64|aarch64)
      PLATFORM="linux/arm64" ;;
    *)
      echo "Warning: Unknown architecture '$ARCH', defaulting to Docker's default platform." >&2
      PLATFORM=""
      ;;
  esac
fi

echo "Building image: $IMAGE" 
if [ -n "$PLATFORM" ]; then
  echo "Platform: $PLATFORM"
  exec docker build --platform "$PLATFORM" -t "$IMAGE" .
else
  exec docker build -t "$IMAGE" .
fi
