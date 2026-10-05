#include <stdio.h>

int my_memcmp(void* arr1, void* arr2, size_t n)
{
	unsigned char* p1 = (unsigned char*) arr1;
	unsigned char* p2 = (unsigned char*) arr2;

	while(n > 0) {
		if(*p1 != *p2) {
			return (*p1 > *p2)? 1 : -1; 
		}
		p1++;
		p2++;
		n--;
	}

	return 0;
}

int main()
{
	int arr1[10] = {1, 2, 3, 4};
	int arr2[10] = {1, 2, 3, 4};
	int arr3[10] = {1, 2, 5, 4};


	printf("Return from memcmp: %d\n", my_memcmp(arr3, arr1, sizeof(arr1)));
	
	return 0;
}
