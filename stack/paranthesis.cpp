#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool valid_paranthesis(string str)
{
	stack<int> st;

	for(int i = 0; str[i] != '\0'; i++)  {
		if(str[i] == '{' || str[i] == '[' || str[i] == '(') {
			st.push(str[i]);
		} else if(!st.empty() && ((str[i] == '}' && st.top() == '{'
		|| str[i] == ']' && st.top() == '['
		|| str[i] == ')' && st.top() == '('))) {
			st.pop();
		} else {
			return false;
		}
		
	}

	if(st.size() > 0)
		return false;

	return true;
}

int main()
{
	string str = "{{[]}}";

	if(valid_paranthesis(str)) {
		cout<<"Paranthesis is balanced"<<endl;
	} else {
		cout<<"Paranthesis is not balanced"<<endl;
	}
	return 0;
}
