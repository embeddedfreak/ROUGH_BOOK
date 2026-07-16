#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void right_rotate(vector<int> &vec, int k)
{
	//if k > n
	int n = vec.size();

	k = k%n;

	reverse(vec.begin(), vec.end());
	reverse(vec.begin(), vec.begin()+k);
	reverse(vec.begin()+k, vec.end());
	
}

int main()
{
	vector<int> vec = {10, 20, 30, 40, 50};

	int k = 7;

	right_rotate(vec, k);

	for(int val: vec) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
