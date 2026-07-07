#include <iostream>

using namespace std;

class Teacher {
private:
	double salary;
public:
	string name;
	int id;
	string dept;
	
	// Non parameterized contructor
	Teacher() {
		cout<<"This is non parameterized constructor"<<endl;
	}

	// Parameterized constructor
	Teacher(string name, int id, string dept, double salary) 
	{
		cout<<"This is parameterized constructor"<<endl;
		this->name = name;
		this->id = id;
		this->dept = dept;
		this->salary = salary;
	}

	//Copy constructor
	Teacher(Teacher &orgobj)
	{
		cout<<"This is copy constructor"<<endl;

		this->name = orgobj.name;
		this->id = orgobj.id;
		this->dept = orgobj.dept;
		this->salary = orgobj.salary;
	}

	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
		cout<<"Department: "<<dept<<endl;
		cout<<"Salary: "<<salary<<endl;
	}

};

int main()
{
	Teacher t1("Gladys", 1, "Maths", 35000);


	t1.display();
	
	Teacher t2(t1);
	t2.display();

	return 0;
}
