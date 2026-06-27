#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> vec, int tar, int st, int end)
{

	if(st<=end) {
		int mid = st+(end-st)/2;
		if(vec[mid] == tar) {
			return mid;
		} else if(tar < vec[mid]) {
			return binary_search(vec, tar, st, mid-1);
		} else {
			return binary_search(vec, tar, mid+1, end);
		}
	}
	return -1;
	
}

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5};

	int tar = 5;

	int n = vec.size();

	       int st = 0;
        int end = n-1;


	cout<<"Element "<<tar<<" is at location "<<binary_search(vec, tar, st, end)<<endl;
	return 0;
}
