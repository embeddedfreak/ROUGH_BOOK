#include <iostream>
#include <vector> 

using namespace std;

int missing_num(vector<int> &vec) {

	if(vec.empty()) {
		return -1;
	}

	int n = vec.size();

	int xor_ans = 0;

	for(int i = vec[0]; i <= vec[n-1]; i++) {
		xor_ans ^= i;	
	}

	for(int val : vec) {
		xor_ans^= val;
	}
	
	return xor_ans;
}

int main()
{
	vector<int> vec = {1, 2, 3, 5, 6};

	cout<<"Missing number is: "<< missing_num(vec) <<endl;
	return 0;
}
