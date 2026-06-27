#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4};

	int n = vec.size();

	vector<int> ans(n, 1);

	//prefix
	for(int i=1; i < n; i++) {
		ans[i] = ans[i-1] * vec[i-1];
	}

	//suffix
	int suffix = 1;
	for(int j = n-2; j >= 0; j--) {
		suffix = suffix * vec[j+1];
		ans[j] *= suffix;
	}	


	for(int val : ans) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
