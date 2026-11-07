#include <stdio.h>

int main()
{
	
	
	int arr[] = {1, 2, 3, 2, 1};

	unsigned int xor_all = 0;
	int n = sizeof(arr) /sizeof(arr[0]);
	for(int i = 0; i < n; i++) {
		xor_all ^= arr[i];
	}

	printf("Non repeating number is %d\n", xor_all);

	return 0;
}
