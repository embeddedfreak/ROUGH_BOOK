#include <iostream>
#include <vector>

using namespace std;

vector<int> pair_sum(vector<int> vec, int n, int target)
{
	vector<int> ans;

	int i = 0;
	int j = n-1;

	int p_sum = 0;

	while(i < j) {
		p_sum = vec[i] + vec[j];
		
		if(p_sum == target) {
			ans.push_back(vec[i]);
			ans.push_back(vec[j]);
			break;

		} else if(p_sum > target) {
			j--;
		} else {
			i++;
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
