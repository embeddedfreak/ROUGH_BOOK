#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	vector<int> arr = {4, 5, 2, 27, 7};

	int n = arr.size();

	vector<int> ans(n, 0);

	stack<int> st;

	for(int i = n-1; i >= 0; i--) {

		while(!st.empty() && st.top() <= arr[i]) {
			st.pop();
		}

		if(st.empty()) {
			ans[i] = -1;
		} else {
			ans[i] = st.top();
		}

		st.push(arr[i]);
	}

	for(int val: ans)
	{
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}

