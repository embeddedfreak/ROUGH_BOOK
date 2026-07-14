#include <iostream>
#include <vector>

using namespace std;

int remove_duplicate(vector<int> &vec)
{
	vector<int> ans;

	int n = vec.size();

	int j = 0;

	for(int i = 1; i < n; i++) {
		if(vec[i] != vec[j]) {
			j++;
			vec[j] = vec[i];
		}
				
	}

	return j+1;

}

int main() 
{
	vector<int> vec = {1, 1, 1, 3, 3, 4, 5};

	int size = remove_duplicate(vec);

	for(int i = 0; i < size; i++)  {
		cout<<vec[i]<<" ";
	}

	cout<<endl;

	return 0;
}
