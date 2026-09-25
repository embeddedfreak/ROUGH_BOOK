#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> arr = {1, 2, 6, 5, 7};

	sort(arr.begin(), arr.end());

	int minSum = 0;

	for(int i = 0; i < arr.size()-1; i++) {
		minSum+=arr[i];
	}

	int maxSum = 0;

	for(int i = 1; i < arr.size(); i++) {
		maxSum+=arr[i];
	}

	cout<<minSum<<" "<<maxSum<<endl;
	return 0;
}
