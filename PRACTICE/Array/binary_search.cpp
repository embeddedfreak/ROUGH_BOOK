#include<iostream>
#include<vector>


using namespace std;

int binary_search(vector<int> arr, int tar)
{
	int st = 0;
	int end = arr.size()-1;


	while(st <= end) {
		int mid = st + (end-st)/2;
		if(arr[mid] == tar) { 
			return mid;
		} else if(tar < arr[mid]) {
			end = mid -1;
			
		} else {
			st = mid + 1;
		}
	}
	return -1;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	int target = 3;

	int idx = binary_search(arr, target);

	cout<<"Element fount at index "<<idx<<endl;

	return 0;

}
