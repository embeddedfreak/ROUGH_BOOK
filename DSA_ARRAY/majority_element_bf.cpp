#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {2, 2, 3, 1, 2};

	int n = vec.size();

	for(int ele: vec) {
		int freq = 0;
		for(int val: vec) {
			if(ele == val) {
				freq++;
			}
		}
		if(freq > n/2) {
			cout<<"Majority Elements is: "<<ele<<endl;
			break;
		}
	}
	return 0;
}
