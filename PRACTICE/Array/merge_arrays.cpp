#include <iostream>

using namespace std;

int main()
{
	int arr1[3] = {1, 2, 3};
	int arr2[3] = {4, 5, 6};

	int merged[6];

	for(int i = 0; i < 3; i++) {
		merged[i] = arr1[i];
	}

	for(int i = 0; i < 3; i++) {
		merged[i+3] = arr2[i];
	}


	for(int idx = 0; idx < 6; idx++) {
		cout<<merged[idx]<<" ";
	}

	cout<<endl;
	return 0;
}
