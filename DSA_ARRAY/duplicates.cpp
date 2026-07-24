#include <iostream>
#include <vector>

using namespace std;

int remove_dup(vector<int> &arr)
{
	int j = 0; 

	for(int i = 0; i < arr.size(); i++) {
		
		if(arr[i] != arr[j]) {
			j++;
			swap(arr[i], arr[j]);
		}
	}

	return j+1;	
}

int main()
{
	vector<int> arr = {1, 2, 2, 3, 4, 4, 5};

	int idx = remove_dup(arr);

	for(int i = 0; i <idx; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}
