#include <stdio.h>
#include <string.h>

int main() {
	char arr[10000];
	int temp;
	scanf("%s", &arr);
	int length = strlen(arr);

	for (int i = 0; i<length; i++) {
		for (int j = 0; j<length - 1; j++)
		{
			if (arr[j]<arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("%s", arr);

	return 0;
}