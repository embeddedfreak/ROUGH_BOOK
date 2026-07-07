#include <iostream>

using namespace std;

class Teacher {
public:
	double *sptr;
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
		//dynamic allocation
		sptr = new double(salary);
	}


	//Copy constructor
	Teacher(Teacher &orgobj)
	{
		cout<<"This is copy constructor"<<endl;

		this->name = orgobj.name;
		this->id = orgobj.id;
		this->dept = orgobj.dept;
		this->sptr = orgobj.sptr;
	}

	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
		cout<<"Department: "<<dept<<endl;
		cout<<"Salary: "<<*sptr<<endl;
	}

};

int main()
{
	Teacher t1("Gladys", 1, "Maths", 35000);


	t1.display();
	
	Teacher t2(t1);

	t2.display();

	*t2.sptr = 20000;
	cout<<"After Modification: "<<endl;

        t1.display();
        t2.display();

	return 0;
}
