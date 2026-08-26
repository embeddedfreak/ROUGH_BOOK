#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	vector<int> arr = {4, 5, 1, 2, 1, 5, 4, 2, 7};

	unordered_map<int, int> mp;

	for(int val: arr) {
		if(mp.find(val) == mp.end()) {
			mp[val] = 1;
		} else {
			mp[val] = mp[val] + 1;
		}
	}

	for(auto val: mp) {
		cout<<val.first<<" : "<<val.second<<endl;
	}

	cout<<"First non-repeating element is: "<<endl;

	for(auto val: mp) {
		if(val.second == 1) {
			cout<<val.first<<endl;
			break;
		}
	}

	return 0;
}
