#include <iostream>
#include <vector>

using namespace std;

class Stack {
public:
	vector<int> vec;

	void push(int val)
	{
		vec.push_back(val);

	}

	void pop() {
		vec.pop_back();
	}

	int top() {
		return vec[vec.size() - 1];	
	}

	bool empty() {
		return vec.size() == 0;
	}

};

int main()
{
	Stack s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}

	cout<<endl;


	return 0;
}
