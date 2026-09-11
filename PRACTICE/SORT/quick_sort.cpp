#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int st , int end)
{
	int idx = st -1;
	int pivot = arr[end];

	for(int j = st; j < end; j++) {
		if(arr[j] <= pivot) {
			idx++;
			swap(arr[j], arr[idx]);
		}

	}
	idx++;
	swap(arr[end], arr[idx]);
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
	vector<int> arr = {2, 1, 5, 4, 6, 3};

	quick_sort(arr, 0, arr.size()-1);

	for(int val: arr) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}

