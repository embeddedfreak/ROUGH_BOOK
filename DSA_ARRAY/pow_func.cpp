#include <iostream>

using namespace std;

int main()
{
	int base = 3;
//	int exp = 5;
	int exp = -5;

	int binform = abs(exp);

	double b;

	if(exp < 0)
		b = 1.0/base;
	else
		b = base;

	double ans = 1.0;
	while(binform) {
		if(binform % 2) {
			ans *= b;	
		}
		b *= b;
		binform/=2;
	}

	cout<<"base^exp: "<< ans<<endl;
	return 0;
}
