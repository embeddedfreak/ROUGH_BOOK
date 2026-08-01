/* This is the example of user defined operator overloading */
#include<iostream>

using namespace std;

class Number {
public:
	int num;

	Number(int num)
	{
		this->num = num;
	}

	Number operator+(Number& obj) {
		return Number(num + obj.num);
	}

};

int main()
{
	Number n1(10);
	Number n2(20);

	Number n3 = n1 + n2;

	cout<<"Number 1: "<<n1.num<<endl;
	cout<<"Number 2: "<<n2.num<<endl;
	cout<<"Number 3: "<<n3.num<<endl;
	return 0;
}
