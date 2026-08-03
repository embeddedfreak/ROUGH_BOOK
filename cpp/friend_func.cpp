#include <iostream>

using namespace std;

class A {

	int x;

	public:
	A() {
		x = 100;
	}

	friend void display(A obj);
};

void display(A obj) 
{
	cout<<"Value of x = "<<obj.x<<endl;
}


int main()
{
	A a;

	display(a);
	return 0;
}
