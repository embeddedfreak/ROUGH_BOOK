#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int> &arr)
{
	int n = arr.size();

	for(int i = 0; i < n -1; i++) {
		int min_idx = i;
		for(int j = i; j < n; j++) {
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		swap(arr[i], arr[min_idx]); 
	}
}

int main()
{
	vector<int> arr = {2, 3, 1, 5, 4};

	selection_sort(arr);

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}
