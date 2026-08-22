#include<iostream>
#include<vector>

using namespace std;


int Linear_Search(vector<int> arr, int tar)
{
	for(int i = 0; i < arr.size(); i++) {
		if(tar == arr[i]) {
			return i;
		}
	}
	return -1;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};

	int target = 20;

	int idx = Linear_Search(arr, target);

	if(idx >= 0) {
		cout<<"Element "<<target<<" is found at index: "<<idx<<endl;
	} else {
		cout<<"Element "<<target<< " not found"<<endl;
	}

	return 0;
}

