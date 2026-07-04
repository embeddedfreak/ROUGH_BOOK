#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int st, int end) 
{
	int pivot = arr[end];

	int pidx = st-1;

	for(int j = st; j < end; j++) {
		if(arr[j] < pivot) {
			pidx++;
			swap(arr[pidx], arr[j]);
		}	
	}

	pidx++;
	swap(arr[end], arr[pidx]);
	return pidx;
}

void quick_sort(vector<int> &arr, int st, int end)
{
	if(st < end) {

		int piv_idx = partition(arr, st, end);

		//left partition
		quick_sort(arr, st, piv_idx-1);

		//right_partition
		quick_sort(arr, piv_idx+1, end); 
	}
}

int main() 
{
	vector<int> arr = {5, 7, 6, 2, 1, 3};

	int st = 0;
	int end = arr.size()-1;

	quick_sort(arr, st, end);

	cout<<"After quick sort: "<<endl;

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;
}	

