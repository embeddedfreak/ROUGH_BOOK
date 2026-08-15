#include <stdio.h>
#include <pthread.h>

void* thread1(void* args)
{
	printf("In thread1\n");
	return NULL;
}

int main()
{
	pthread_t t1;

	pthread_create(&t1, NULL, thread1, NULL);

	pthread_join(t1, NULL);

	printf("In main\n");
	return 0;
}
