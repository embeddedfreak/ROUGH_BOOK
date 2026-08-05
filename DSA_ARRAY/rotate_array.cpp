#include <iostream>
#include <vector>

using namespace std;

void right_rotate(vector<int> &arr, int k) 
{
	int size = arr.size();

	vector<int> temp;

	for(int i = size-1; i > size-1-k; i--) {
		temp.push_back(arr[i]);	
	}

	for(int i = size-1-k; i >= 0; i--) {
		arr[i+k] = arr[i];
	}

	for(int i = 0; i < k; i++) {
		arr[i] = temp[i];
	}
}

int main() 
{
	vector<int>  arr = {1, 2, 3, 4, 5, 6, 7, 8};

	int k = 3;

	int size = arr.size();

	right_rotate(arr, k);

	for(int i = 0; i < size; i++) {
		cout<<arr[i]<<" ";
	}


	return 0;
}
