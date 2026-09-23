/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;
pthread_cond_t sig;
int num = 1;

void* odd_func(void* args) {
        
    pthread_mutex_lock(&lock);
    while(num < 100) {
    if(num % 2 == 0) {
        pthread_cond_wait(&sig, &lock);
    }
    
        printf("Thread odd: %d \n", num);
        num++;
    pthread_cond_signal(&sig);
    }
    pthread_mutex_unlock(&lock);

}

void* even_func(void* args) {
    pthread_mutex_lock(&lock);
    while(num <= 100) {
    if(num % 2 != 0) {
        pthread_cond_wait(&sig, &lock);
    }
    

        printf("Thread even: %d \n", num);
        num++;

    pthread_cond_signal(&sig);
    }
    pthread_mutex_unlock(&lock);
    
}

// 2 thread  odd 1-99 
int main()
{
    pthread_t t1, t2;
    
    pthread_mutex_init(&lock, NULL);
    pthread_cond_init(&sig, NULL);
    
    pthread_create(&t1, NULL, odd_func, NULL);
    pthread_create(&t2, NULL, even_func, NULL);
    
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    
    pthread_cond_destroy(&sig);
    pthread_mutex_destroy(&lock);
    return 0;
}

