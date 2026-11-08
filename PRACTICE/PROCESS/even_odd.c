#include <stdio.h>
#include <pthread.h>

int num = 1;

pthread_mutex_t lock;

pthread_cond_t cond;

void* odd_thread(void* args)
{
	pthread_mutex_lock(&lock);
	while(num < 100) {
		if(num % 2 == 0) 
			pthread_cond_wait(&cond, &lock);
		printf("odd: %d\n", num);
		num++;
			pthread_cond_signal(&cond);
	}
	pthread_mutex_unlock(&lock);

	return NULL;
}

void* even_thread(void* args)
{
        pthread_mutex_lock(&lock);
        while(num < 100) {
                if(num % 2 != 0)
                        pthread_cond_wait(&cond, &lock);
                printf("even: %d\n", num);
                num++;
                        pthread_cond_signal(&cond);
        }
        pthread_mutex_unlock(&lock);

        return NULL;
}


int main()
{
	pthread_t t1, t2;

	pthread_mutex_init(&lock, NULL);

	pthread_create(&t1, NULL, odd_thread, NULL);
	pthread_create(&t2, NULL, even_thread, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	pthread_mutex_destroy(&lock);

	return 0;
}
