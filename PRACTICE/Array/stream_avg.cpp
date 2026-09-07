#include <iostream>
#include <queue>

using namespace std;


queue<int> q;

double stream_avg(int num) 
{
	static int sum = 0;


	q.push(num);
	sum += num;
	

	if(q.size() > 6) {
		sum-= q.front();
		q.pop();
	}



	if(q.size() <  6)
		return -1;

	return static_cast<double>(sum)/6;	

}

int main()
{
	int num;

	for(;;) {
		cin>>num;
		cout<<stream_avg(num)<<endl;
	}
	return 0;
}
