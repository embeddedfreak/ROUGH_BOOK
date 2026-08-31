#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr)
{
	int n = arr.size();

	bool isSwap = false;
	//loop for iterations
	for(int i = 0; i < n-1; i++) {
		//loop for comparison
		for(int j = 0; j < n-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				isSwap = true;
				swap(arr[j], arr[j+1]);
			}
		}

		cout<<"After itr "<<i<< ":";
		for(int val: arr) {
			cout<<val<<" ";
		}
		cout<<endl;

		if(!isSwap) {
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
