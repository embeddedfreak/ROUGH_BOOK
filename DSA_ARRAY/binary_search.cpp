#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> vec, int ele)
{
	int n = vec.size();

	int st = 0;
	int end = n-1;
	while(st<=end) {
		int mid = st+(end-st)/2;
		if(vec[mid] == ele) {
			return mid;
		} else if(ele < vec[mid]) {
			end = mid - 1;
		} else {
			st = mid + 1;
		}
	}
	return -1;
	
}

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5};

	int ele = 5;

	cout<<"Element "<<ele<<" is at location "<<binary_search(vec, ele)<<endl;
	return 0;
}
