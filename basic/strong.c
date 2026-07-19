#include <stdio.h>
#include <stdbool.h>
int fact(int num)
{

	//Base condition
	if(num == 0) 
		return 1;

	//recursion
	return num * fact(num -1);
}

bool is_strong(int num)
{
	int temp = num;
	int dig;
	int ans = 0;
	while(num) {
		dig = num % 10;
		ans+=fact(dig);
		num = num /10;
	}
	
	if(temp == ans) {
		return true;
	} else {
		return false;
	}

}

int main()
{
	int num = 145;

	if(is_strong(num)) {
		printf("Number is strong\n");
	} else {
		printf("Number is not strong\n");
	}

	return 0;
}
