#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sem;

int num = 0;

void* my_thread(void* args)
{
	sem_wait(&sem);
	for(int i = 0; i < 10000;i++) {
		num++;		
	}
	sem_post(&sem);
	
	return NULL;
}

int main()
{
	pthread_t t1, t2;

	sem_init(&sem, 0, 1);

	pthread_create(&t1, NULL, my_thread, NULL);
	pthread_create(&t2, NULL, my_thread, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	printf("Number is %d\n", num);

	sem_destroy(&sem);


	return 0;
}
