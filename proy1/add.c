#include <stdio.h>

extern int add_asm(int a, int b);

int add(int a, int b);
int add(int a, int b) {
	return add_asm(a, b);
}
