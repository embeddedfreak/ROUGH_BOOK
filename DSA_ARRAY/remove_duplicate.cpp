#include <iostream>
#include <vector>

using namespace std;

vector<int> remove_duplicate(vector<int> vec)
{
	vector<int> ans;

	int n = vec.size();

	for(int i=0; i<n; i++) {
		bool duplicate = false;
		for(int j = 0; j < i; j++) {
			if(vec[i] == vec[j]) {
				duplicate = true;
			}
		}

		if(!duplicate) {
			ans.push_back(vec[i]);
		}
	}
	return ans;


}

int main() 
{
	vector<int> vec = {2, 1, 3, 3, 4, 5};

	vector<int> ans = remove_duplicate(vec);

	for(int val: ans) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
