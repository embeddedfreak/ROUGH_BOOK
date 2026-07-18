#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int max_subarray_sum(vector<int> &vec)
{
	int maxSum = INT_MIN;
	int n = vec.size();
	for(int st=0; st < n; st++) {
		int sum = 0;
		for(int end = st; end < n; end++) {
			sum+=vec[end];
			maxSum = (sum  > maxSum)? sum: maxSum;
		}
	}
	return maxSum;
}

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5};

	cout<<"Max subarray sum = "<<max_subarray_sum(vec)<<endl;
}
