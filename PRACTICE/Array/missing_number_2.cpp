#include <iostream>
#include<vector>

using namespace std;

int missing_number(vector<int> arr)
{
	int xor_all = 0;

	//xor of all the elements
	for(int i = 1; i <= arr.size()+1; i++) {
		xor_all = xor_all ^ i;	
	}

	//xor of missing element array
	for(int val : arr) {
		xor_all = xor_all ^ val;
	}

	return xor_all;
}

int main()
{
	vector<int> arr = {1, 2, 4, 5};

	int missnum = missing_number(arr);

	cout<<"Missing number is "<<missnum<<endl;
	return 0;
}

