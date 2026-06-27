#include <iostream>
#include <vector>

using namespace std;

vector<int> pair_sum(vector<int> vec, int n, int target)
{
	vector<int> ans;
	
	for(int i = 0; i < n -1 ; i++) {
		for(int j = i+1; j < n; j++) {
			if(target == (vec[i] + vec[j])) {
				ans.push_back(vec[i]);
				ans.push_back(vec[j]);
			}	
		}
	}
	return ans;
}

int main()
{
	vector<int> vec = {2, 7, 11, 15};

	int target = 9;

	int n = vec.size();

	vector<int> ans;

	ans = pair_sum(vec, n, target);

	for(int val: ans) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
