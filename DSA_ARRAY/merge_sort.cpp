#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
	vector<int> temp;

	int i = st;
	int j = mid+1;
	while(i <= mid && j <= end) {
		if(arr[i] < arr[j]) {
			temp.push_back(arr[i]);
			i++;
		} else {
			temp.push_back(arr[j]);
			j++;
		}
	}

	//for right arr to merge completely
	while(j <= end) {
		temp.push_back(arr[j]);
		j++;
	}

	//for left arr to merge completely
	while(i <= mid) {
		temp.push_back(arr[i]);
		i++;
	}

	for(int idx = 0; idx < temp.size(); idx++) {
		arr[st+idx] = temp[idx];
	}
}

void mergesort(vector<int> &arr, int st, int end) {
	if(st < end) {
		int mid = st + (end - st)/2;
		//left split
		mergesort(arr, st, mid);

		//right split
		mergesort(arr, mid+1, end);

		//merge at bt
		merge(arr, st, mid, end);
	}
}

int main()
{
	vector<int> arr = {1, 8, 9, 2, 4, 5};

	int st = 0, end = arr.size();

	mergesort(arr, st, end);

	for(int val: arr) {
		cout<<val<<" ";
	}

	cout<<endl;
}
