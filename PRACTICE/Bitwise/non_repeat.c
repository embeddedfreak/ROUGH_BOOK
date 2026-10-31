#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 1, 2, 3};

	int n = sizeof(arr)/sizeof(arr[0]);

	int num = 0;

	for(int i = 0; i < n; i++) {
		num ^= arr[i]; 
	}

	printf("Number that is non repeating is %d\n", num);
	
}
