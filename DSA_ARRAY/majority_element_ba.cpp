#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec = {2, 2, 3, 1, 2};

	int n = vec.size();

	sort(vec.begin(), vec.end());

	int freq = 1;
	for(int i = 1; i < n; i++) {
		if(vec[i] == vec[i-1]) {
			freq++;
		} else {
			freq = 1;
		}
		if(freq > n/2) {
			cout<<"Majority Elements is: "<<vec[i]<<endl;
			break;
		}
	}
	return 0;
}
