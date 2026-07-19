#include <stdio.h>
#include <stdbool.h>


bool is_amstrong(int num)
{
	int temp = num;

	int dig;
	int ans = 0;

	while(num) {
		dig = num % 10;
		ans += dig * dig *dig;
		num = num / 10;		
	}

	if(ans == temp)
		return true;
	else
		return false;
}

int main()
{
	int num = 153;

	if(is_amstrong(num))
		printf("Number is amstrong number\n");
	else
		printf("Number is not a amstrong number\n");
	return 0;
}
