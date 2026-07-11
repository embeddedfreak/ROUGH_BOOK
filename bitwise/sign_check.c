#include <stdio.h>
/* are 3 ways
 * Direct compare >0, <0, =0
 * Bring it down to -1 0 1 and then compare.
 * Check MSB bit
 */

int main()
{
#if 0
	/* Method 1: Direct compare >0, <0, =0 */
	int num = 10;
	if(num > 0 ) {
		printf("Number is Positive\n");
	} else if(num < 0) {
		printf("Number is negative\n");
	} else {
		printf("Number is zero\n");
	}
#endif
#if 0
	/* Bring it down to -1 0 1 and then compare. */
	int num = 10;
	int sign;

	sign = (num > 0) - (num < 0);

        if(sign == 1 ) {
                printf("Number is Positive\n");
        } else if(sign == -1) {
                printf("Number is negative\n");
        } else {
                printf("Number is zero\n");
        }
#endif
	/* Check MSB bit */
	int num = -12;
	if((num >> 31) & 1) {
		printf("Number is negative\n");
	} else {
                printf("Number is Positive\n");
	}

	return 0;
}
