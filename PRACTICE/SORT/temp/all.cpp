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

/* 2, 3, 1, 5, 4 */

void selection_sort(vector<int> &arr)
{
	int n = arr.size();

	for(int i = 0; i < n-1; i++) {
		int min_idx = i;
		for(int j = i; j < n; j++) {
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		swap(arr[i], arr[min_idx]);
	}	
}

void merge(vector<int> &arr, int st, int mid, int end)
{
	int i = st;
	int j = mid+1;

	vector<int> temp;

	while(i <= mid && j <= end) {
		if(arr[i] <= arr[j]) {
			temp.push_back(arr[i]);		
			i++;
		} else {
			temp.push_back(arr[j]);		
			j++;
		}
	}

	while(i <= mid) {
		temp.push_back(arr[i]);		
		i++;		
	}

	while(j <= end) {
		temp.push_back(arr[j]);		
		j++;		
	}

	for(int idx = 0; idx < temp.size(); idx++) {
		arr[st+idx] = temp[idx];
	}


}

void merge_sort(vector<int> &arr, int st, int end)
{
	if(st < end) {
		int mid = st + (end - st)/2;

		merge_sort(arr, st, mid);

		merge_sort(arr, mid+1, end);

		merge(arr, st, mid, end);
	}
}

int main()
{
	vector<int> arr = { 2, 1, 4, 5, 6, 3};

	//	bubble_sort(arr);

	//	quick_sort(arr, 0, arr.size()-1);

	//	insertion_sort(arr);

	//	selection_sort(arr);

	merge_sort(arr, 0, arr.size()-1);

	for(int val: arr) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
