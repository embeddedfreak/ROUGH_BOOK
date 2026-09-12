#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr)
{
	int n = arr.size();

	for(int i = 0; i < n-1; i++) {
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

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	bubble_sort(arr);

	for(int val: arr) {
		cout<<val<<" ";
	}

	cout<<endl;
	return 0;
}
