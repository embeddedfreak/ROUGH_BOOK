#include <stdio.h>

void findunique(int arr[], int n, int* x, int* y)
{
	int xor_all = 0;

	for(int i = 0; i < n; i++)  {
		xor_all ^= arr[i]; 
	}

	int mask = xor_all & (-xor_all);
	
	for(int i = 0; i < n; i++) {
		if(arr[i] & mask) {
			*y ^= arr[i];
		} else {
			*x ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = {1, 2, 1, 2, 3, 4};

	int n = sizeof(arr)/sizeof(arr[0]);
	int x, y;
	x = y = 0;

	findunique(arr, n, &x, &y);

	printf("x = %d, y = %d\n", x, y);
	return 0;
}
