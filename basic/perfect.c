#include <stdio.h>

int main()
{
	int num = 7;

	int sum = 0;
	for(int i = 1; i < num; i++) {
		if(num % i == 0) {
			sum+=i;
		}
	}

	if(sum == num)
		printf("Number is perfect\n");
	else
		printf("Number is not perfect\n");
	return 0;
}
