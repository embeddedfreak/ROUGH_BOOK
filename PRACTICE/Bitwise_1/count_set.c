#include <stdio.h>

int count_set(int n)
{
	int count = 0;

	while(n) {
		if(n&1) {
			count++;
		}
		n>>=1;
	}

	return count;

}

int main()
{
	int num = 0x8;

	printf("Number of set bit: %d\n", count_set(num));
	return 0;
}
