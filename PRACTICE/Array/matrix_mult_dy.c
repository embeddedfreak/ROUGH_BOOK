#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r1, c1, r2, c2;
	int i, j , k;
	int **a, **b, **res;


	r1 = 2;
	c1 = 3;
	r2 = 3;
	c2 = 2;

	a = malloc(r1*sizeof(int*));
	b = malloc(r2*sizeof(int*));
	res = malloc(r1*sizeof(int*));

	//allocate row of address for a
	for(int i = 0; i < r1; i++) {
		a[i] = malloc(c1 * sizeof(int));
	}

	//allocate row of address for b
	for(int i = 0; i < r2; i++) {
		b[i] = malloc(c2 * sizeof(int));
	}

	//allocate row of address for res
	for(int i = 0; i < r1; i++) {
		res[i] = malloc(c2 * sizeof(int));
	}

	printf("Enter elements into A:\n");
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c1; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter elements into B:\n");
	for(int i = 0; i < r2; i++) {
		for(int j = 0; j < c2; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			res[i][j] = 0;
			for(int k = 0; k < c1; k++) {
				res[i][j]+= a[i][k] * b[k][j];
			}
		}
		
	}

	printf("Resultant matrix is:\n");

	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}


	return 0;
}
