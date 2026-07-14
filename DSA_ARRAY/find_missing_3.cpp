#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missing_num(vector<int> &vec) {

	if(vec.empty()) {
		return -1;
	}

	int n = vec.size();
	int st = *min_element(vec.begin(), vec.end());
	int end = *max_element(vec.begin(), vec.end());

	int xor_ans = 0;

	for(int i = st; i <= end; i++) {
		xor_ans ^= i;	
	}

	for(int val : vec) {
		xor_ans^= val;
	}
	
	return xor_ans;
}

int main()
{
	vector<int> vec = {3, 2, 1, 5, 6};

	cout<<"Missing number is: "<< missing_num(vec) <<endl;
	return 0;
}
