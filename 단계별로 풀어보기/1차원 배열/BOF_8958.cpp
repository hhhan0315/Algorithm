#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char array[80] = { 0 };
	scanf("%d", &n);
	int sum = 0;
	int count = 0;

	for (int i = 0; i<n; i++) {
		scanf("%s", array);
		sum = 0; count = 0;
		for (int j = 0; j<strlen(array); j++) {
			if (array[j] == 'X')
			{
				count = 0;
			}
			else {
				++count;
				sum += count;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}