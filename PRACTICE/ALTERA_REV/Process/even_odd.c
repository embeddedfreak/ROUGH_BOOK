#include <stdio.h>
#include <pthread.h>

int num = 0;

pthread_mutex_t lock;
pthread_cond_t cond;

void* odd_func(void* args)
{
	pthread_mutex_lock(&lock);
	while(num < 100) {
		if(num % 2 == 0) {
			pthread_cond_wait(&cond, &lock);
		}
		printf("Odd: %d\n", num++);
		pthread_cond_signal(&cond);
	}
	pthread_mutex_unlock(&lock);
}
void* even_func(void* args)
{
        pthread_mutex_lock(&lock);
        while(num < 100) {
                if(num % 2 != 0) {
                        pthread_cond_wait(&cond, &lock);
                }
                printf("Even: %d\n", num++);
                pthread_cond_signal(&cond);
        }
        pthread_mutex_unlock(&lock);
}

int main()
{
	pthread_t t1, t2;

	pthread_mutex_init(&lock, NULL);
	pthread_cond_init(&cond, NULL);
	pthread_create(&t1, NULL, odd_func, NULL);
	pthread_create(&t2, NULL, even_func, NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	pthread_mutex_destroy(&lock);
	pthread_cond_destroy(&cond);

	printf("num = %d\n", num);

	return 0;
}
