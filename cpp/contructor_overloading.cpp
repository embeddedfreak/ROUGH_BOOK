#include<iostream>

using namespace std;

class Person {
public:
	string name;
	int age;

	Person() 
	{
		cout<<"No parameterized"<<endl;
	}

	Person(string name, int age) 
	{
		this->name = name;
		this->age = age;
		cout<<"parameterized"<<endl;
	}
};

int main()
{
	Person p1;
	Person p2("Gladson", 28);

	return 0;
}
