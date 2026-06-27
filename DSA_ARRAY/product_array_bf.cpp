#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4};

	int n = vec.size();

	vector<int> ans(n, 1);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j ++) {
			if(i != j) {
				ans[i] *= vec[j];	
			}
		}
	}

	for(int val: ans) {
		cout<<val<<" ";
	}

	cout<<endl;
	return 0;
}
