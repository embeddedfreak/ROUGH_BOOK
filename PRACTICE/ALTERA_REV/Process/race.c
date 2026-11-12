#include <stdio.h>
#include <pthread.h>

int num = 0;

void* my_func(void* args)
{
	for(int i = 0; i < 10000; i++) {
		num++;		
	}
}

int main()
{
	pthread_t t1, t2;

	pthread_create(&t1, NULL, my_func, NULL);
	pthread_create(&t2, NULL, my_func, NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	printf("num = %d\n", num);

	return 0;
}
