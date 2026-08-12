#include <iostream>
#include <vector>

using namespace std;


void find_missing_num(vector<int> vec)
{
	int i = vec[0];

	for(int val: vec) {
		if(val!=i) {
			cout<<"Missing Number is "<<i<<endl;
			break;
		}
		i++;
	}

}

int main()
{
	vector<int> vec = {1, 2, 3, 5, 6};

	find_missing_num(vec);

	return 0;
}
