#include <stdio.h>
int main()
{
	unsigned int arr[] = { 1, 2, 3, 1, 2, 4};

	int n = sizeof(arr) / sizeof(arr[0]);
	
	unsigned int xor_all = 0;

	for(int i = 0; i < n; i++) {
		xor_all ^= arr[i];
	}

	unsigned mask = xor_all & (-xor_all);

	unsigned int a = 0;
	unsigned int b = 0;

	for(int i = 0; i < n; i++) {
		if(arr[i] & mask) {
			a ^= arr[i];
		} else {
			b ^= arr[i];
		}
	}

	printf("Non repeating element is %d and %d\n", a, b);

	return 0;
}
