#include <iostream>
#include <vector>

using namespace std;

void reverse_arr(vector<int> &vec)
{
	int i = 0;
	int j = vec.size()-1;

	while(i < j) {
		int temp = vec[i];
		vec[i] = vec[j];
		vec[j] = temp;
		i++;j--;
	}
}

int main()
{
	vector<int> vec = {2, 3, 1, 5, 6, 7};

	reverse_arr(vec);

	for(int var: vec) {
		cout<<var<<" ";
	}

	cout<<endl;
	return 0;
}

