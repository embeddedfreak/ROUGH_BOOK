#include<iostream>
#include<vector>

using namespace std;

void insertion_sort(vector<int> &arr) 
{
	int n = arr.size();

	for(int i = 1; i < n; i++) {
		int curr = arr[i];
		int prev = i-1;
		while(prev >= 0 && curr < arr[prev]) {
			arr[prev+1] = arr[prev];
			prev--;
		}
		arr[prev+1] = curr;
	}	
}

int main()
{
	vector<int> arr = {4, 1, 3, 2, 5};

	insertion_sort(arr);

	for(int val: arr) 
	{
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}
