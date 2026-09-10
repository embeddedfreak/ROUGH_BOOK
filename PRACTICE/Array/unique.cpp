#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 1, 1, 2, 3, 4, 4, 5, 5};

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 0; i < n -1; i++) {
		if(arr[i] == -1)
			continue;
		bool found = false;
		for(int j = i+1; j < n; j++) {
			if(arr[j] == -1)
				continue;
			if(arr[i] == arr[j]) {
				found = true;
				arr[j] = -1;
			}
		}
		if(!found) { 
			cout<<arr[i]<<" ";
		}
	}

	cout<<endl;

	return 0;
}
