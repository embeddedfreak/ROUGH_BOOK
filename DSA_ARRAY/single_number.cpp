#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> vec = {1, 2, 3, 1, 2};

	int xor_num = 0;

	for(int val: vec) {
		xor_num ^= val;	
	}

	cout<<xor_num<<endl;

	return 0;
}
