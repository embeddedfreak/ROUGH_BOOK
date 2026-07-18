#include <iostream>

using namespace std;

int main() 
{
	int row1 = 3;
	int col1 = 2;
	int row2 = 2;
	int col2 = 3;

	int mat1[row1][col1] = {{1, 2},
			{4, 5},
			{7, 8}};
	
	int mat2[row2][col2] = {{1, 2, 3},
			{4, 5, 6}};

	int res[row1][col2]= {0};

	for(int i = 0; i < row1; i++) {
		for(int j = 0; j < col2; j++) {
			for(int k = 0; k < col1; k++) {
				res[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	for(int i = 0; i < row1; i++) {
		for(int j = 0; j < col2; j++) {
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
