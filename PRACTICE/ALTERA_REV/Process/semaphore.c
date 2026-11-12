#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

int num = 0;

sem_t sem;

void* my_func(void* args)
{
	sem_wait(&sem);
	for(int i = 0; i < 10000; i++) {
		num++;		
	}
	sem_post(&sem);
}

int main()
{
	pthread_t t1, t2;

	sem_init(&sem, 0, 1);
	pthread_create(&t1, NULL, my_func, NULL);
	pthread_create(&t2, NULL, my_func, NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	sem_destroy(&sem);

	printf("num = %d\n", num);

	return 0;
}
