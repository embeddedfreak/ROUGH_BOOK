#include <stdio.h>

void isAnagram(char *str1, char *str2)
{
	unsigned int freq[256] = {0};

	for(int i = 0; str1[i] != '\0'; i++) {
		freq[(unsigned char)str1[i]]++;
		freq[(unsigned char)str2[i]]--;
	}

	for(int i = 0; i < 256; i++) {
		if(freq[i] !=0) {
			printf("Its not a anagram\n");
			return;
		}
	}
	printf("Its a anagram\n");

}

int main()
{
	char str1[20] = "listen";
	char str2[20] = "silet";

	isAnagram(str1, str2);

	return 0;
}
