#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int target) {
	int st = 0;
	int end = n;

	while(st <= end) {
		int mid = st + (end-st)/2;

		cout<<mid<<endl;
		if(arr[mid] == target) {
			return mid;
		} else if (target < arr[mid]) {
			end = mid - 1; 
		} else {
			st = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	int n = sizeof(arr)/sizeof(arr[0]);

	int target = 5;

	int idx = binary_search(arr, n, target);

	cout<<"Binary search successful and found at: "<<idx<<endl;

	return 0;
}
