#include <iostream>
#include <vector>

using namespace std;

int remove_dup(vector<int> &arr)
{
	int j = 0;

	int n = arr.size();

	for(int i = 0; i < n; i++) 
	{
		if(arr[j] != arr[i]) {
			j++;
			swap(arr[i], arr[j]);
		}
	}
	return j;
}

int main()
{
	vector<int> arr = {1, 2, 2, 3, 4};

	int idx = remove_dup(arr);

	for(int i = 0; i <= idx; i++) {
		cout<<arr[i]<<" ";
	}

	return 0;
}
