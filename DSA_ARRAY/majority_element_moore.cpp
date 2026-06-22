#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec = {2, 2, 1, 1, 2};

	int n = vec.size();

	sort(vec.begin(), vec.end());

	int freq = 0;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if(freq == 0) {
			ans = vec[i];
			freq++;
		} else if (vec[i] == ans) {
			freq++;
		} else {
			freq--;
		}
	}
	if(freq > 0) {
		cout<<"Majority Elements is: "<<ans<<endl;
	}
	return 0;
}
