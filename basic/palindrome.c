#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int num)
{
	int temp = num;
	int dig;
	int rev = 0;

	while(num) {
		dig = num % 10;
		rev = rev * 10 + dig;
		num = num / 10;	
	}

	printf("%d\n", rev); 
	if(rev == temp) 
		return true;
	else
		return false;
}

int main()
{
	int num = 123;

	if(is_palindrome(num)) {
		printf("NUmber is palindrome\n");
	} else {
		printf("NUmber is not palindrome\n");
	}
	return 0;
}
