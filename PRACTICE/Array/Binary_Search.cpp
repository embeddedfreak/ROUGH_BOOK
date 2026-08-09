#include<iostream>
#include <vector>

using namespace std;

int Binary_Search(vector<int> arr, int target)
{
	int st = 0;
	int end = arr.size()-1;

	while(st <= end) {
		int mid = st + (end - st)/2;

		if(arr[mid] == target) {
			return mid;
		} else if(target < arr[mid]) {
			end = mid - 1;
		} else {
			st = mid + 1;
		}
	}
	return -1;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6};

	int target = 0;

	cout<<"Target "<<target<<" found at index "<<Binary_Search(arr, target)<<endl;

	return 0;
}
