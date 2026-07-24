#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec = {1, 0, 2, 3, 0, 4};

	int j = 0;
	
	for(int i = 0; i < vec.size(); i++) {
		if(vec[i] != 0) {
			swap(vec[i], vec[j]);
			j++;			
		}

	}

	for(int val: vec) {
		cout<<val<<" ";
	}
	cout<<endl;
}
