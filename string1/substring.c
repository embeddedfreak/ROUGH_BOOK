#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20], str2[20];
	printf("Enter the string\n");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';

	printf("Enter the string\n");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

//hello
//llo
	int n = strlen(str1);
	int m  = strlen(str2);


	for(int i = 0; i <= n-m; i++) {
		bool is_sub = true;
		for(int j = 0; j < m; j++) {
			if(str2[j] != str1[j+i]);
			{
				is_sub = false;
				break;
			}
		}	
	}	



}
