#include <iostream>
#include <vector>
#include <set>

using namespace std;

int remove_dup(vector<int> &arr)
{
	set<int> s;

	for(int val: arr) {
		s.insert(val);
	}

	int j = 0;

	for(int val: s) {
		arr[j++] = val;
	}
	
	return j;

}

int main()
{
	vector<int> arr = { 1, 2, 2, 3, 4, 5};

	
	int idx = remove_dup(arr);

	for(int i = 0; i < idx; i++) {
		cout<<arr[i]<<" ";
	}

	return 0;
}
