#include <iostream>
#include <vector>

using namespace std;

/*
 * 4, 1, 3, 2, 5
 * Take 4 as sorted
 * 1, 3, 4, 5 as unsorted
 * so run for loop on unsorted.
 * keep curr at first element of unsorted and try to place it at right position
 * prev should be index before the curr index
 * if curr is lesser than arr[prev] then copy arr[prev] on arr[prev+1]
 * arr[prev+1] may be curr which is saved in curr
 * so assume that arr[prev+1] is blank
 * finally place curr at right position
 */

void insertion_sort(vector<int> &arr) {
	int n = arr.size();

	for(int i = 1; i < n; i++) {
		int curr = arr[i];
		int prev = i-1;

		while(prev>=0 && curr < arr[prev]) {
			arr[prev+1] = arr[prev];
			prev--;
		}

		arr[prev+1] = curr;
	}
}

int main()
{
	vector<int> arr = {2, 1, 4, 6, 5, 3};

	insertion_sort(arr);


	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}
