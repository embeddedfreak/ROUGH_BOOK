#include <iostream>
#include <vector>

using namespace std;
//Rotate by one

void rotate_k(vector<int> &arr, int k)
{
	int n = arr.size();
	
	vector<int> ans;

	//Keep end in an temp array
	for(int i = n-k; i < n; i++) {
		ans.push_back(arr[i]);
	}

	//shift the elements to the right
	for(int i = n - k - 1; i >= 0; i--) {
		arr[i+k] = arr[i];
	}

	//place temp array elements at the begining
	for(int i = 0; i < k; i++) {
		arr[i] =  ans[i];
	}


}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	int k = 2;

	rotate_k(arr, k);

	for(int val : arr) {
		cout<<val<<" ";
	}

	cout<<endl;


	return 0;
}
