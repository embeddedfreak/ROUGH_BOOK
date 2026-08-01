#include<iostream>

using namespace std;

class Shape {
	public:
		virtual void draw() = 0;
};

class Circle : public Shape {
	public:

		void draw() {
			cout<<"Drawing Circle"<<endl;
		}
};

int main()
{
/* abstract_class.cpp:21:15: error: cannot declare variable ‘s1’ to be of abstract type ‘Shape’
   21 |         Shape s1;
      |               ^~
abstract_class.cpp:5:7: note:   because the following virtual functions are pure within ‘Shape’:
    5 | class Shape {
*/
	Shape* s1;

	Circle c1;
	c1.draw();
	return 0;
}
