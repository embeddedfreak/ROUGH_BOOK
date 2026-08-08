#include<iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6};

	int target = 5;

	bool found = false;

	int i;
	for(i = 0; i < arr.size(); i++) {
		if(arr[i] == target) {
			found = true;
			break;
		}
	}

	if(found) {
		cout<<"Target "<<target<<" found at index "<<i<<endl;
	} else {
		cout<<"Target not found"<<endl;
	}

	return 0;
}
