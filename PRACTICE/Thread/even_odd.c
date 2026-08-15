//1, 2, 3, 4, 5, 6, 7, 8, 9, 10
#include<stdio.h>
#include<pthread.h>
int num = 1;
pthread_mutex_t lock;
pthread_cond_t cond;

void* odd(void* args)
{
	while(num < 10) {

		pthread_mutex_lock(&lock);
		if(num%2 == 0) {
			pthread_cond_wait(&cond, &lock);
		}
		printf("odd: %d\n", num++);
		pthread_cond_signal(&cond);
		pthread_mutex_unlock(&lock);
	}
}

void* even(void* args)
{
	while(num < 10) {

		pthread_mutex_lock(&lock);
		if(num%2 != 0) {
			pthread_cond_wait(&cond, &lock);
		}
		printf("even: %d\n", num++);
		pthread_cond_signal(&cond);
		pthread_mutex_unlock(&lock);
	}
}

int main()
{
	pthread_t th[2];

	pthread_mutex_init(&lock, NULL);
	pthread_cond_init(&cond, NULL);

	pthread_create(&th[0], NULL, odd, NULL);
	pthread_create(&th[1], NULL, even, NULL);

	for(int i = 0; i < 2; i++) {
		pthread_join(th[i], NULL);
	}
	pthread_mutex_destroy(&lock);
	pthread_cond_destroy(&cond);

	return 0;

}
