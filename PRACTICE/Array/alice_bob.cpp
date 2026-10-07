#include <iostream>

using namespace std;

int main()
{
	int a[] = {17, 28, 30};
	int b[] = {99, 16, 8};

	int score[2] = {0};

	for(int i = 0; i < 3; i++) {
		if(a[i] > b[i]) {
			score[0]++;	
		} else if(a[i] < b[i]) {
			score[1]++;
		} else {
			continue;
		}
	}

	for(int j = 0; j < 2; j++) {
		cout<<score[j]<<" ";
	}
	cout<<endl;
	return 0;
}
