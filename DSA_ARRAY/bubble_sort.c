#include <stdio.h>


void swap(int* a, int *b) 
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void bubble_sort(int arr[], int n)
{
	printf("Inside the bubble sort\n");
	for(int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
        }

	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n-1-i ; j++) {
			if(arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main()
{
	int arr[] = {10, 30, 20, 60, 50};

	int n = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, n);

	printf("After sort array is: \n");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}
