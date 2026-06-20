#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
	vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
	int n = arr.size();

	int maxSum = INT_MIN;

	int sum = 0;
	for(int i = 0; i < n; i++) {
			sum += arr[i];		
			maxSum = (maxSum < sum)? sum : maxSum;

			if(sum < 0) {
				sum = 0;
			}
	}

	cout<<"Max Sum is:"<<maxSum<<endl;
}

