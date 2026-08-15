#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

static int idx = 0;
sem_t sem;

void* thread1(void* args)
{
	sem_wait(&sem);
	for(int i = 0; i < 20000; i++) {
		idx++;
	}
	sem_post(&sem);
	return NULL;
}

void* thread2(void* args)
{
	sem_wait(&sem);
	for(int i = 0; i < 20000; i++) {
		idx++;
	}
	sem_post(&sem);
	return NULL;
}

int main()
{
	pthread_t t1, t2;

	sem_init(&sem, 0, 1);

	pthread_create(&t1, NULL, thread1, NULL);
	pthread_create(&t2, NULL, thread2, NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	sem_destroy(&sem);

	printf("Idx = %d\n", idx);
	return 0;
}
