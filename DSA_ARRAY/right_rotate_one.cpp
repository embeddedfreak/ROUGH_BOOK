#include <iostream>
#include <vector>

using namespace std;

void right_rotate(vector<int> &vec)
{
	int last = vec[vec.size()-1];

	for(int j = vec.size() - 1; j > 0; j--)
	{
		vec[j] = vec[j-1];
	}

	vec[0] = last;
}

int main()
{
	vector<int> vec = {10, 20, 30, 40, 50};

	right_rotate(vec);

	for(int val: vec) {
		cout<<val<<" ";
	}

	cout<<endl;

	return 0;
}
