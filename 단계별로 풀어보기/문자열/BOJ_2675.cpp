#include <stdio.h>

int main() {
	int num, num2;
	char array[20];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &num2);
		scanf("%s", &array);
		for (int j = 0; array[j] != NULL; j++)
		{
			for (int k = 0; k<num2 ; k++)
			{
				printf("%c", array[j]);
			}
		}
		printf("\n");
	}
	return 0;
}