#include <stdio.h>

int main()
{
	int num = 1232;

	int arr[10] = {0};

	int dig;
	int dup_dig = -1;
	
	while(num) {
		dig = num % 10;
		arr[dig]++;
		if(arr[dig] > 1) {
			dup_dig = dig;
		}
		num = num / 10;	
	}

	printf("duplicate digit is %d\n", dup_dig);
	return 0;
}
