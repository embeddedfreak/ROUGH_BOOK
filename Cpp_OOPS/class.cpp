#include <iostream>

using namespace std;

class Teacher {
private:
	double salary;
public:
	string name;
	int id;
	string dept;

	void set_salary(double sal)
	{
		salary = sal;
	}

	double get_salary()
	{
		return salary;
	}
};

int main()
{
	Teacher t1;
	t1.name = "Gladys";
	t1.id = 1;
	t1.dept = "Maths";
	t1.set_salary(35000);

	cout<<"Teacher Name = "<<t1.name<<endl;
	cout<<"Teacher id = "<<t1.id<<endl;
	cout<<"Teacher dept = "<<t1.dept<<endl;
	cout<<"Teacher salary = "<<t1.get_salary()<<endl;

	return 0;
}
