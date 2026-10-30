#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int> arr, int tar)
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
	int tar = 3;

	int idx = linear_search(arr, tar);

	cout<<"Element: "<<tar<<" is found at: "<<idx<<endl;

	return 0;
}
