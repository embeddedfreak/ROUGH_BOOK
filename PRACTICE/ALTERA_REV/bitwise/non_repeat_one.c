#include <stdio.h>
int main()
{
	unsigned int arr[] = { 1, 2, 3, 1, 2};

	int n = sizeof(arr) / sizeof(arr[0]);
	
	unsigned int xor_all = 0;

	for(int i = 0; i < n; i++) {
		xor_all ^= arr[i];
	}

	printf("Non repeating element is %d\n", xor_all);

	return 0;
}
