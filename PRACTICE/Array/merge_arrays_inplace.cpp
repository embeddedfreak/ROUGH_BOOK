#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr1[4] = {1, 4, 7, 8};
	int arr2[4] = {2, 3, 6, 9};

	int i = 3;

	int j = 0;

	while(i >= 0 && j < 4) {
		if(arr1[i] > arr2[j]) {
			swap(arr1[i], arr2[j]);
		}	
		i--;
		j++;
	}	

	sort(arr1, arr1+4);
	sort(arr2, arr2+4);

	for(int i = 0; i < 4; i++)  {
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i = 0; i < 4; i++)  {
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	return 0;
}
