#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> vec, int target) 
{
	int n = vec.size();
	int st = 0;
	int end = n - 1;

	while(st <= end) {
		int mid = st + (end - st)/2;

		if(vec[mid] == target) {
			return mid;
		} else if(target < vec[mid]) {
			end = mid - 1;
		} else {
			st = mid + 1;		
		}
	}
	return -1;
}

int main()
{
	vector<int> vec = {10, 20, 30, 40, 50};

	int target = 30;

	printf("Element %d is found at %d\n", target, binary_search(vec, target));
	
	return 0;
}
