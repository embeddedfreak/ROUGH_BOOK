#include <iostream>

#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

using namespace std;
// (gap + 1) / 2 is used to get ceil(gap / 2) using integer division.
// Example: gap = 9 → (9 + 1) / 2 = 5, instead of 9 / 2 = 4.
// For even gaps, the result is unchanged: 8 → (8 + 1) / 2 = 4.
// Also 1/2 = 0

int main()
{
	int A[4] = {1, 4, 7, 8};
	int B[4] = {2, 3, 6, 9};

	int n = SIZE(A);
	int m = SIZE(B);

	int total = n + m;
	
	int gap = total / 2;

	while(gap > 0) {

		int i = 0;
		int j = gap;

		while(j < total) {
			//Both elements in A
			if(i < n && j < n) {
				if(A[i] > A[j]) {
					swap(A[i], A[j]);
				}
			}

			//One in A and one in B
			else if(i < n && j >= n) {
				if(A[i] > B[j - n]) {
                                        swap(A[i], B[j - n]);
                                }
			} else {
				if(B[i-n] > B[j-n]) {
					swap(B[i-n], B[j-n]);
				}
			}
			j++;
			i++;
		}	
		gap = gap / 2;
	}
	
	for(int i = 0; i < n; i++) {
		cout<<A[i]<<" ";
	}
	cout<<endl;
	for(int j = 0; j < n; j++) {
		cout<<B[j]<<" ";
	}
	cout<<endl;
	return 0;
}
