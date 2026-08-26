#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
	unordered_map<int, int> mp;

	mp[1] = 1;
	mp[2] = 2;

	if(mp.find(1) != mp.end()) {
		cout<<mp[1]<<endl;
	}

	//using iterator
	auto it = mp.find(2);
	if(it != mp.end()) {
                cout<<it->second<<endl;
        }

	mp.erase(1);

	if(mp.find(1) != mp.end()) {
                cout<<mp[1]<<endl;
        } else {
		cout<<-1<<endl;
	}
	return 0;
}
