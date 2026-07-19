#include <stdio.h>

int power_func(int base, int exp)
{
        //base condition
        if(exp == 0) {
                return 1;
        }

        return base * power_func(base, exp-1);
}

int main()
{
        int base = 3;
        int exp = 5;

        printf("%d ^ %d: %d\n", base, exp, power_func(base, exp));
        return 0;
}

