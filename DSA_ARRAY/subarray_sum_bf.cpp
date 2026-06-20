#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	int n = arr.size();

	int maxSum = INT_MIN;

	for(int st = 0; st < n; st++) {
		for(int end = st; end < n; end++) {
			int sum = 0;
			for(int i = st; i <= end; i++) {
				sum = sum+ arr[i];		
			}
			maxSum = (maxSum < sum)? sum : maxSum;
		}
	}

	cout<<"Max Sum is:"<<maxSum<<endl;

}

