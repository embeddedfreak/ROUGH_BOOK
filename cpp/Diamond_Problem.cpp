#include<iostream>

using namespace std;

/*

Diamond problem is

1. Without virtual inheritance:

   $ ./a.out

   Contructor of A
   Contructor of B
   Contructor of A
   Contructor of C
   Contructor of D

   2 times constructor A is called.

2. Ambiguous call for display function

   Diamond_Problem.cpp: In function ‘int main()’:
   Diamond_Problem.cpp:61:12: error: request for member ‘display’ is ambiguous
       61 |         d1.display();
          |            ^~~~~~~
   Diamond_Problem.cpp:26:14: note: candidates are: ‘void A::display()’
       26 |         void display()
          |              ^~~~~~~
   Diamond_Problem.cpp:26:14: note:                 ‘void A::display()’

   The problem occurs because D gets two copies of A:

              A
             / \
            B   C
             \ /
              D

   So D contains:
       B -> A
       C -> A

   Therefore:
       1. Constructor of A is called two times.
       2. d1.display() is ambiguous because there are two A::display() functions.

To solve the diamond problem, we use virtual inheritance.

output:

Contructor of A
Contructor of B
Contructor of C
Contructor of D
Display function called

*/

class A {
public:
	A() 
	{
		cout<<"Contructor of A"<<endl;
	}

	void display() 
	{
		cout<<"Display function called"<<endl;
	}
};

class B : virtual public A {
public:
        B()
        {
                cout<<"Contructor of B"<<endl;
        }
};

class C : virtual public A {
public:
        C()
        {
                cout<<"Contructor of C"<<endl;
        }
};

class D : public B, public C {
public:
        D()
        {
                cout<<"Contructor of D"<<endl;
        }
};


int main()
{
	D d1;
	d1.display();
	return 0;
}

