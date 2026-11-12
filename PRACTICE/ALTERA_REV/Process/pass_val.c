#include <stdio.h>
#include <pthread.h>

struct Num {
	int a;
	int b;
};

void* add(void* args)
{
	struct Num *ptr = (struct Num *) args;

	printf("Value of a is %d\n", ptr->a);
	printf("Value of b is %d\n", ptr->b);

	int *res;
	*res = ptr->a + ptr->b;

	return res;
}

int main()
{
	pthread_t t1;

	struct Num n = {
		.a = 10,
		.b = 20
	};

	pthread_create(&t1, NULL, add, &n);


	
	void *res;
	pthread_join(t1, &res);

	printf("Sum: %d\n", *(int*)res);

	return 0;
}
