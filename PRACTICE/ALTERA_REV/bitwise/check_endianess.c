#include <stdio.h>
/* num 12345678 -> 5678 1234 -> 78 56 34 12
 * LI: 78 56 34 12
 * BI: 12 34 56 78
 */
int main()
{
	unsigned int num = 0x1;

	unsigned char* ptr = (unsigned char*)&num;

	if(*ptr == 1) {
		printf("Little_endian\n");
		//0xFFFF FFFF
		//12345678
		//7856 3412 LI
		//12345678
		//5678 1234
		//7856 3412
		num = ((num & 0xFFFF0000) >> 16) | ((num & 0x0000FFFF) << 16); //
		num = ((num & 0xFF00FF00) >> 8) | ((num & 0x00FF00FF) << 8);
		printf("%x\n", num);
	} else {
		printf("Big_endian\n");
	}

	return 0;
}
