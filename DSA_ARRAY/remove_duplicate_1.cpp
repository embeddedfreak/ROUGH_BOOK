#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> remove_duplicate(vector<int> vec)
{
	vector<int> ans;

	unordered_set<int> s;

	for(int val: vec) {
		if(s.find(val) == s.end()) {
			s.insert(val);
			ans.push_back(val);
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
