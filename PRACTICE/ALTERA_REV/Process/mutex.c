#include <stdio.h>
#include <pthread.h>

int num = 0;

pthread_mutex_t lock;

void* my_func(void* args)
{
	pthread_mutex_lock(&lock);
	for(int i = 0; i < 10000; i++) {
		num++;		
	}
	pthread_mutex_unlock(&lock);
}

int main()
{
	pthread_t t1, t2;

	pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, my_func, NULL);
	pthread_create(&t2, NULL, my_func, NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	pthread_mutex_destroy(&lock);

	printf("num = %d\n", num);

	return 0;
}
