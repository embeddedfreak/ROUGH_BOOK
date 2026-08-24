#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr = {1, 0, 2, 0, 3, 4};

	int j = 0;

	for(int i = 0; i < arr.size(); i++) {
		if(arr[i]!=0) {
			swap(arr[i], arr[j]);
			j++;
		}
	}

	cout<<"After sending 0 to end"<<endl;

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}

