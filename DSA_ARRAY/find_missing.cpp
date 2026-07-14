#include <iostream>
#include <vector> 

using namespace std;

int missing_num(vector<int> vec) {

	if(vec.empty()) {
		return -1;
	}

	int count = vec[0];
	for(int i = 0; i < vec.size(); i++) {
		if(vec[i] != count)  {
			return count;
		}
		count++;
	}
	
	return -1;
}

int main()
{
	vector<int> vec = {1, 2, 3, 5, 6};

	cout<<"Missing number is: "<< missing_num(vec) <<endl;
	return 0;
}
