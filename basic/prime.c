#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
	if(num < 2)
		return false;

	for(int i = 2; i * i <= num; i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int num = 3;

	if(is_prime(num)) {
		printf("Number is prime\n");
	} else {
		printf("Number is not a prime\n");
	}
	return 0;
}
