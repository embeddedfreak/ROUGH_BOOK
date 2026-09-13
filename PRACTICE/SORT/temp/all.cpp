#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr) 
{
	int n = arr.size();

	for(int i = 0; i < n-1; i++)  { 
		bool isSorted = true;
		for(int j = 0; j < n-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				isSorted = false;
				swap(arr[j], arr[j+1]);
			}
		}


		if(isSorted) {
			break;
		}
	}

}
/*
4 2 1 6 5 3
-2 4 1 6 5 3
2 -1 4 6 5 3
*/
int partition(vector<int> &arr, int st, int end)
{
	int pivot = arr[end];

	int idx = st-1;

	for(int j = st; j < end; j++)  {
		if(arr[j] < pivot) {
			idx++;
			swap(arr[j], arr[idx]);
		}
	}

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
/*
4, 1, 3, 2, 5
4 - 1, 3, 2, 5
*/

void insertion_sort(vector<int> &arr) 
{
	int n = arr.size();

	for(int i = 1; i < n; i++)  {
		int prev = i-1;
		int curr = arr[i];

		while(prev >= 0 && curr < arr[prev]) {
			arr[prev+1] = arr[prev];
			prev--;
		}

		arr[prev+1] = curr;
	}	
}

int main()
{
	vector<int> arr = { 2, 1, 4, 5, 6, 3};

//	bubble_sort(arr);

//	quick_sort(arr, 0, arr.size()-1);
	
	insertion_sort(arr);

	for(int val: arr) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
