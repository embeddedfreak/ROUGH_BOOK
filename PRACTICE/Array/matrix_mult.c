#include <stdio.h>
#include<stdlib.h>

#define ROWS 2
#define COLS 2

int main()
{
	//Dynamic allocation of A
	int *A = malloc(ROWS * COLS * sizeof(int));
	
	//Dynamic allocate of B
	int *B = malloc(ROWS * COLS * sizeof(int));

	//Dynamic allocate of C
	int *C = malloc(ROWS * COLS * sizeof(int*));


	for(int i = 0; i < ROWS*COLS; i++) {
		A[i] = i+1;	
	}

	for(int i = 0; i < ROWS*COLS; i++) {
		B[i] = i+1;
	}

	for(int i = 0; i < ROWS*COLS; i++) {
		C[i] = 0;
	}
	//m x p  & p x n
	for(int i = 0; i < ROWS; i++) {
		for(int j = 0; j < COLS; j++) {
			for(int k = 0; k < ROWS; k++) {
				C[i * COLS + j] += A[i * COLS + k] * B[k * COLS + j];	
			}
		}
	}
        for (int i = 0; i < ROWS*COLS; i++)
        {
                        printf("%d ", C[i]);
        }


	return 0;
}
