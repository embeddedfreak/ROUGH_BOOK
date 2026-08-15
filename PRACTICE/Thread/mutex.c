#include<stdio.h>
#include<pthread.h>

static int idx = 0;
pthread_mutex_t lock;

void* thread1(void* args)
{
	pthread_mutex_lock(&lock);
	for(int i = 0; i < 20000; i++) {
		idx++;
	}
	pthread_mutex_unlock(&lock);
	return NULL;
}

void* thread2(void* args)
{
	pthread_mutex_lock(&lock);
	for(int i = 0; i < 20000; i++) {
		idx++;
	}
	pthread_mutex_unlock(&lock);
	return NULL;
}

int main()
{
	pthread_t t1, t2;

	pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, thread1, NULL);
	pthread_create(&t2, NULL, thread2, NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	pthread_mutex_destroy(&lock);
	printf("Idx = %d\n", idx);
	return 0;
}
