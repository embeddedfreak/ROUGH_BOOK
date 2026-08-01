#include<iostream>

using namespace std;

class Person {
	public:
		string name;
		int age;

		virtual void getInfo(string name, int age) {
		}

};

class Student : public Person{
	public:

		void getInfo(string name, int age) {
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}

};

int main()
{
	Student s1;
	s1.getInfo("Abhishek", 20);

	return 0;
}
