#include <iostream>

using namespace std;

class Person
{
public:
	string name;
	int age;
	
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

};

class Student : public Person {
public:
	int rollno;

	Student(string name, int age, int rollno) : Person(name, age) {
		this->rollno = rollno;
	}

	void getInfo()
	{
		cout<<"Name of the student is :"<<name<<endl;
		cout<<"Age of the student is :"<<age<<endl;
		cout<<"Rollno of the student is :"<<rollno<<endl;
	}
		
};

int main()
{
	Student s("Gladson", 28, 20);

	s.getInfo();

	return 0;
}
