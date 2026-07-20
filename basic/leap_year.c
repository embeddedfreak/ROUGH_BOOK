#include <stdio.h>

int main()
{
	int year = 2012;

	if(year % 400 == 0) {
		printf("Year is a leap year\n");
	} else if(year % 100 == 0) {
		printf("Year is not a leap year\n");
	} else if(year % 4 == 0) {
		printf("Year is a leap year\n");
	} else {
		printf("Year is not a leap year\n");

	}
	return 0;
}
