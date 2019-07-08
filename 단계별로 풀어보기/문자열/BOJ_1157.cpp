#include <stdio.h>

int main() {
	char array[1000000];
	int alpabet[26] = { 0 };
	int max = 0, max_index = 0;
	int overlap=0;

	scanf("%s", &array);

	/*
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; array[j] != NULL; j++) 
		{
			if (array[j] == i)
			{
				alpabet[i - 97]++;
				break;
			}
		}
	}
	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; array[j] != NULL; j++)
		{
			if (array[j] == i)
			{
				alpabet[i - 65]++;
				break;
			}
		}
	}*/

	for (int i = 0; array[i] != NULL; i++) {
		if (array[i] <= 'Z') alpabet[array[i] - 65]++;
		else alpabet[array[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (alpabet[i] > max)
		{
			max = alpabet[i];
			max_index = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (max == alpabet[i]) overlap++;
	}

	if (overlap >= 2) printf("?");
	else printf("%c", max_index + 65);
	return 0;
	//ascii code (number : '0'~'9' = 48~57)  (capital : 'A'~'Z' = 65~90)  (small letter : 'a'~'z' = 97~122)
}