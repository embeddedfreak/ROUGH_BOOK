#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int> vec, int target) 
{
	for(int i = 0; i < vec.size(); i++) {
		if(vec[i] == target) {
			return i;
		}
	}

	return -1;
}

int main()
{
	vector<int> vec = {10, 20, 30, 40, 50};

	int target = 30;

	printf("Element %d is found at %d\n", target, linear_search(vec, target));
	
	return 0;
}
