#include<iostream>
#include <vector>

using namespace std;

int Binary_Search(vector<int> arr, int target, int st, int end)
{

	if(st <= end) {

		int mid = st + (end - st)/2;


		if(arr[mid] == target) {
			return mid;
		} else if(target < arr[mid]) {
			return Binary_Search(arr, target, st, mid - 1);
		} else {
			return Binary_Search(arr, target, mid + 1, end);
		}
	}
	return -1;	
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6};

	int target = 6;

	int st = 0;
	int end = arr.size()-1;

	cout<<"Target "<<target<<" found at index "<<Binary_Search(arr, target, st, end)<<endl;

	return 0;
}
