#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
	vector<int> temp;

	int i = st;
	int j = mid+1;

	while(i <= mid && j <=end) {
		if(arr[i] <= arr[j]) {
			temp.push_back(arr[i]);
			i++;
		} else {
			temp.push_back(arr[j]);
			j++;
		}
	}

	//add remaining of left
	while(i <= mid) {
		temp.push_back(arr[i]);
		i++;
	}

	//add remaining of right
	while(j <= end) {
		temp.push_back(arr[j]);
		j++;
	}

	for(int idx = 0; idx < temp.size(); idx++) 
	{
		arr[st+idx] = temp[idx];
	}
}

void merge_sort(vector<int> &arr, int st, int end)
{
	if(st < end) {
		int mid = st + (end-st)/2;

		//left half
		merge_sort(arr, st, mid);

		//right half
		merge_sort(arr, mid+1, end);

		merge(arr, st, mid, end);
	}
}

int main()
{
	vector<int> arr = {1, 4, 3, 2, 5, 7};

	int st = 0;
	int end = arr.size()-1;

	merge_sort(arr, st, end);

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}
