#include <iostream>
#include <vector> 

using namespace std;

int missing_num(vector<int> &vec) {

	if(vec.empty()) {
		return -1;
	}

	int n = vec.size();

	int act_sum = 0;
	
	for(int i = vec[0]; i <= vec[n-1]; i++) {
		act_sum += i;
	}

	cout<<act_sum<<endl;

	int cal_sum = 0;
	for(int val : vec) {
		cal_sum+=val;
	}

	cout<<cal_sum<<endl;
	if(cal_sum < act_sum) {
		return act_sum - cal_sum;
	}

	return -1;
}

int main()
{
	vector<int> vec = {1, 2, 3, 5, 6};

	cout<<"Missing number is: "<< missing_num(vec) <<endl;
	return 0;
}
