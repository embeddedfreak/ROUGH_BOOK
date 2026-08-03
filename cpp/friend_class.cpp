#include <iostream>

using namespace std;

class A {

	int x;

	public:
	A() {
		x = 100;
	}
#if 0
	friend_class.cpp: In member function ‘void B::display(A)’:
		friend_class.cpp:20:44: error: ‘int A::x’ is private within this context
		20 |                 cout<<"Value of x = "<<obj.x<<endl;
	|                                            ^
		friend_class.cpp:7:13: note: declared private here
		7 |         int x;
#endif
	friend class B;
};

class B {
	public:
		void display(A obj) 
		{
			cout<<"Value of x = "<<obj.x<<endl;
		}

};

int main()
{
	A a;
	B b;

	b.display(a);
	return 0;
}
