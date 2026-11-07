#include <stdio.h>

void find_non_repeat(int arr[], int n, int* a, int* b)
{
	int xor_all = 0;

	for(int i = 0; i < n; i++) {
		xor_all^=arr[i];
	}

	int mask = xor_all & (-xor_all);

	for(int i = 0; i < n; i++) {
		if(arr[i] & mask) {
			*a^= arr[i];
		} else {
			*b^=arr[i];
		}
	}

}

int main()
{
	int arr[] = {1, 2, 3, 2, 1, 4};

	int n = sizeof(arr)/sizeof(arr[0]);

	int a, b;

	find_non_repeat(arr, n, &a, &b);

	printf("Non repeating number are a = %d, b = %d\n", a, b);

	return 0;
}
