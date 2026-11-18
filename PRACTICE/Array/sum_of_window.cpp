#include <iostream>
#include <vector>

using namespace std;

vector<int> sum_of_window(vector<int> arr, int k)
{
	vector<int> res;

	int sum = 0;

	for(int i = 0; i < k; i++) {
		sum +=arr[i];		
	}
	res.push_back(sum);

	int n = arr.size();
	for(int i = k; i < n; i++) {
		sum = sum - arr[i-k] + arr[i];
		res.push_back(sum);
	}

	return res;
}

int main()
{
	vector<int> arr = { 1, 2, 3, 4, 5, 6};

	int k = 3;

	vector<int> ret = sum_of_window(arr, k);

	for(int val : ret) {
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}
