#include <stdio.h>

int main()
{
	int terms = 10;

	int a = 0;
	int b = 1;

	for(int i = 0; i < terms; i++) {
		printf("%d ", a);
		int c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
