#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int st, int end)
{
	int pivot = arr[end];
	//make sure idx is relative to st and not -1
	int idx = st-1;

	//make sure you dont touch the pivot using j
	for(int j = st; j < end; j++) {
		if(arr[j] <= pivot) {
			idx++;
			swap(arr[idx], arr[j]);
		}
	}

	//place pivot at right position
	idx++;
	swap(arr[idx], arr[end]);

	return idx;
}

void quick_sort(vector<int> &arr, int st, int end)
{
	if(st < end) {
		int pidx = partition(arr, st, end);

		quick_sort(arr, st, pidx-1);

		quick_sort(arr, pidx+1, end);
	}
}

int main()
{
	vector<int> arr = {2, 1, 4, 6, 5, 3};

	quick_sort(arr, 0, arr.size()-1);

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}
