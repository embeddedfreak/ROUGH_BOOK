#include <iostream>
#include<vector>

using namespace std;

int missing_number(vector<int> arr)
{
	int count = 1;

	int n = arr.size();
	for(int i = 0; i < n; i++) {
		if(arr[i] != count) {
			return count;
		}
		count++;
	}
	return 0;
}

int main()
{
	vector<int> arr = {1, 2, 4, 5};

	int missnum = missing_number(arr);

	cout<<"Missing number is "<<missnum<<endl;
	return 0;
}

