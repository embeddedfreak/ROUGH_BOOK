#include <stdio.h>

unsigned int lsb_set(unsigned int n)
{
	/*c
	 * 0000 1100
	 * 0000 0100
	 */
	return n & (-n);

}

int main()
{
	unsigned int num = 0xc;

	printf("lsb bit set is %x\n", lsb_set(num));

	return 0;
}
