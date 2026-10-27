#include<iostream>
#include <vector>

using namespace std;

void move_zero(vector<int> &arr)
{
	int j = 0;
	int n = arr.size();

	for(int i = 0; i < n; i++) {
		if(arr[i] != 0) {
			swap(arr[j], arr[i]);
			j++;
		}
	}
}

int main()
{
	vector<int> arr = {1, 2, 0, 3, 0, 4};

	move_zero(arr);

	for(int i = 0; i < arr.size(); i++) {
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}
