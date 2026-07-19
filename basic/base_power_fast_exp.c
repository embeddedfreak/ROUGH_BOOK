#include <stdio.h>
#include<stdlib.h>

int main()
{
        int base = 3;
        int exp = 5;

        int bit;

        float val = (float)base;

        float ans = 1;
        while(exp) {
                bit = exp % 2;
                if(bit) {
                        ans*=val;
                        printf("%f\n", ans);
                }

                val = val * val;
                exp/=2;
        }

        printf("Ans = %f\n", ans);
        return 0;
}

