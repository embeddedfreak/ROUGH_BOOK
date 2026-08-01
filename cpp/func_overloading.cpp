#include<iostream>

using namespace std;

class Person {
public:
	string name;
	int age;

	void getInfo()
	{
		cout<<"No parameters in this function"<<endl;
	}

	void getInfo(string name) {
		cout<<"Name : "<<name<<endl;
	}

	void getInfo(string name, int age) {
                cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
        }

};

int main()
{
	Person p1;

	p1.getInfo();

	p1.getInfo("Gladson");

	p1.getInfo("Gladson", 28);

	return 0;
}
