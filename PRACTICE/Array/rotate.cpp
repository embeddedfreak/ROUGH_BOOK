#include <iostream>
#include <vector>

using namespace std;
//Rotate by one

void rotate_one(vector<int> &arr)
{
	int n = arr.size();
	int temp = arr[n-1];

	for(int i = n-1; i > 0; i--) {
		arr[i] = arr[i-1];
	}

	arr[0] = temp;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	rotate_one(arr);

	for(int val : arr) {
		cout<<val<<" ";
	}

	cout<<endl;


	return 0;
}
