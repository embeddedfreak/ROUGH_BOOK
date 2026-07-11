#include <stdio.h>

#define RIGHT_ROTATE(num, pos) ((num >> pos) | (num << (32 - pos)))
#define LEFT_ROTATE(num, pos) ((num << pos) | (num >> (32 - pos)))

int main() {
	int num = 3;
	int pos = 2;

	printf("Right Shift: 0x%x\n", RIGHT_ROTATE(num, pos));
	printf("Left Shift: 0x%x\n", LEFT_ROTATE(num, pos));
	return 0;
}
