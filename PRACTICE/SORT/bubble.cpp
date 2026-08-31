#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr)
{
	int n = arr.size();

	//loop for iterations
	for(int i = 0; i < n-1; i++) {
		//loop for comparison
		for(int j = 0; j < n-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
#if 0
		cout<<"After itr "<<i<< ":";
		for(int val: arr) {
			cout<<val<<" ";
		}
		cout<<endl;
#endif
	}
}

int main()
{
	vector<int> arr = {1, 4, 3, 2, 5};

	bubble_sort(arr);

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}
