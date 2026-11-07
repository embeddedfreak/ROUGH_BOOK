#include <stdio.h>

struct Emp {
	char ch; //1+3
	int id; //4
};

int main()
{
	struct Emp arr[2];

	size_t size = (char*)&arr[1] - (char*)&arr[0];

	printf("Size of structure is %lu\n", size);
	
	return 0;
}
