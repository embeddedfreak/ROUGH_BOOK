#include <stdio.h>
#include<stdlib.h>

#define ROWS 2
#define COLS 2

int main()
{
	//Dynamic allocation of A
	int **A = malloc(ROWS * sizeof(int*));

	for(int i = 0; i < ROWS; i++) {
		A[i] = malloc(COLS * sizeof(int));
	}

	//Dynamic allocate of B
	int **B = malloc(ROWS * sizeof(int*));

	for(int i = 0; i < ROWS; i++) {
		B[i] = malloc(COLS * sizeof(int));
	}

	//Dynamic allocate of C
	int **C = malloc(ROWS * sizeof(int*));

	for(int i = 0; i < ROWS; i++) {
		C[i] = malloc(COLS * sizeof(int));
	}

	A[0][0] = 1;
	A[0][1] = 2;
	A[1][0] = 3;
	A[1][1] = 4;


	B[0][0] = 5;
	B[0][1] = 6;
	B[1][0] = 7;
	B[1][1] = 8;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = 0;
		}
	}
	//m x p  & p x n
	for(int i = 0; i < ROWS; i++) {
		for(int j = 0; j < COLS; j++) {
			for(int k = 0; k < ROWS; k++) {
				C[i][j] += A[i][k] * B[k][j];	
			}
		}
	}
        for (int i = 0; i < ROWS; i++)
        {
                for (int j = 0; j < COLS; j++)
                {
                        printf("%d ", C[i][j]);
                }
		printf("\n");
        }


	return 0;
}
