#include <iostream>
#include <vector>

using namespace std;

void reverse_array(vector<int> &arr, int st, int end)
{
	while(st < end) {
		swap(arr[st], arr[end]);
		st++;
		end--;
	}	
}

void rotate_array(vector<int> &arr, int rotate)
{
	int st = 0;
	int end = arr.size()-1;

	reverse_array(arr, st, end);
	reverse_array(arr, st, rotate-1);
	reverse_array(arr, rotate, end);
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	int rotate = 2;

	rotate_array(arr, rotate);

	for(int val: arr) {
		cout<<val<<" ";
	}
	cout<<endl;
}
