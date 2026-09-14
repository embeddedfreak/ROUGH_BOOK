#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	int pos = 3;//index 2
	
	int ele = 10;

	arr.push_back(0);
	for(int i = arr.size(); i >= pos-1; i--) {
		arr[i] = arr[i-1];
	}

	arr[pos-1] = ele;


	for(int val : arr) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
