#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void right_rotate(vector<int> &arr, int k) 
{
	int size = arr.size();

	if(size == 0) {
		return;
	}

	k = k % size;

	reverse(arr.begin(), arr.end());
	reverse(arr.begin(), arr.begin()+k);
	reverse(arr.begin()+k, arr.end());
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
