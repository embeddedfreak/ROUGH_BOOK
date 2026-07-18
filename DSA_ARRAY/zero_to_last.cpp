#include <iostream>
#include <vector>

using namespace std;

void move_zero_last(vector<int> &vec)
{
	int n = vec.size();
	int j = 0;
	for(int i = 0; i < n; i++) {
		if(vec[i] != 0) {
			swap(vec[i], vec[j]);
			j++;
		}
	}	
}

int main()
{
	vector<int> vec = {0, 1, 2, 0, 4};

	move_zero_last(vec);

	for(int val: vec) {
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}

