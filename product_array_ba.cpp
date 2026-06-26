#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4};

	int n = vec.size();

	vector<int> ans(n, 1);

	vector<int> prefix(n, 1);
	vector<int> suffix(n, 1);

	//prefix
	for(int i=1; i < n; i++) {
		prefix[i] = prefix[i-1] * vec[i-1];
	}

	//suffix
	for(int j = n-2; j >= 0; j--) {
		suffix[j] = suffix[j+1] * vec[j+1];
	}	

	for(int i = 0; i < n; i++) {
		ans[i] = prefix[i] * suffix[i];
	}

	for(int val : ans) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
