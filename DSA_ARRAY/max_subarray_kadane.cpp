#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int max_subarray_sum(vector<int> &vec)
{
	int maxSum = INT_MIN;
	int n = vec.size();
	int sum = 0;
	for(int st=0; st < n; st++) {
		sum+=vec[st];
		maxSum = (sum  > maxSum)? sum: maxSum;
		if(sum < 0) {
			sum = 0;
		}
	}
	return maxSum;
}

int main()
{
	vector<int> vec = {-5, -2, -8};

	cout<<"Max subarray sum = "<<max_subarray_sum(vec)<<endl;
}
