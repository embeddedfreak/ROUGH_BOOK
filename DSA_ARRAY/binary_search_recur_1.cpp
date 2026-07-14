#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> vec, int target, int st, int end) {


	//Base condition
	if(st > end) 
		return -1;

	int mid = st + (end-st)/2;
	if(vec[mid] == target) {
		return mid;
	} else if(target < vec[mid]) {
		return binary_search(vec, target, st, mid-1);
	} else {
		return binary_search(vec, target, mid+1, end);
	} 	
}

int main() {
	vector<int> vec = {10, 20, 30, 40, 50};

	int target = 50;

	int st = 0; 
	int end = vec.size() - 1;
	cout<<binary_search(vec, target, st, end)<<endl;
	return 0;
}
