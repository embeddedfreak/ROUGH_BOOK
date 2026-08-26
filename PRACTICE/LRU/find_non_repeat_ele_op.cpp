#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	vector<int> arr = {4, 5, 1, 2, 1, 5, 4, 2, 7};

	unordered_map<int, int> mp;

	for(int val: arr) {
		mp[val]++;
	}

	for(auto val: mp) {
		cout<<val.first<<" : "<<val.second<<endl;
	}

	cout<<"First non-repeating element is: "<<endl;

	for(int val: arr) {
		if(mp[val] == 1) {
			cout<<val<<endl;
			break;
		}
	}

	return 0;
}
