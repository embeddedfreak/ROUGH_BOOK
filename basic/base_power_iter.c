#include <stdio.h>

int power_func(int base, int exp)
{
	int ans = 1;
	for(int i = 1; i <= exp; i++) {
		ans*=base;
	}
	return ans;
}

int main()
{
        int base = 3;
        int exp = 5;

        printf("%d ^ %d: %d\n", base, exp, power_func(base, exp));
        return 0;
}

