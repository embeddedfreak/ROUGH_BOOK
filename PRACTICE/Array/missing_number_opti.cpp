#include <iostream>
#include <vector>

using namespace std;


void find_missing_num(vector<int> vec)
{
	if(vec.empty()) {
		cout<<"Array is empty"<<endl;
	}


	int miss_num = 0;

	for(int i = 1; i <= vec.size()+1; i++) {
		cout<<i<<" "<<endl;
		miss_num ^=i;
	}
	for(int val: vec) {
		miss_num ^=val;	
	}

	cout<<"Missing number is: "<<miss_num<<endl;

}

int main()
{
	vector<int> vec = {1, 2, 3, 5, 6};

	find_missing_num(vec);

	return 0;
}
