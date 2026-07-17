#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int sec_largest(vector<int> &vec)
{
	int lar = INT_MIN;

	int s_lar;

	for(int val: vec) {
		if(val > lar) {
			s_lar = lar;
			lar = val;
		}	
	}
	return s_lar;
}

int main()
{
	vector<int> vec = {10, 30, 20, 40, 60};

	cout<<"Second Largest Element : "<<sec_largest(vec)<<endl;
	return 0;
}
