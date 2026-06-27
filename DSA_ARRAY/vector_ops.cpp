#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> vec;
	vector<int> vec1 = {1, 2, 3, 4};
	vector<int> vec2(3, 0);

	for(int val: vec1) {
		cout<<val<<" ";
	}

	cout<<endl;

	cout<<"push_back(10) operation:"<<endl;
	vec1.push_back(10);

	cout<<"Size of vec1 is: "<< vec1.size()<<endl;
	cout<<"Capacity of vec1 is: "<< vec1.capacity()<<endl;


	for(int val: vec1) {
		cout<<val<<" ";
	}
	cout<<endl;

	cout<<"First element is "<<vec1.front()<<endl;
	cout<<"Last element is "<<vec1.back()<<endl;

	cout<<"After pop_back()"<<endl;
	vec1.pop_back();

	for(int val: vec1) {
		cout<<val<<" ";
	}
	cout<<endl;

	cout<<"Element at() 1 is "<<vec1.at(1)<<endl;

	cout<<"Copy vec1 to vec3"<<endl;

	vector<int> vec3(vec1);
	cout<<"Elements of vec3 are: "<<endl;
	for(int val: vec3) {
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}
