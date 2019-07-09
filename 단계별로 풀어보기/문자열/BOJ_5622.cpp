#include <stdio.h>
int main() {
	char array[15];
	int sum = 0;
	scanf("%s", &array);
	for (int i = 0; array[i] != NULL; i++) {
		if (array[i] <= 'C') sum += 3;
		else if (array[i] <= 'F') sum += 4;
		else if (array[i] <= 'I') sum += 5;
		else if (array[i] <= 'L') sum += 6;
		else if (array[i] <= 'O') sum += 7;
		else if (array[i] <= 'S') sum += 8;
		else if (array[i] <= 'V') sum += 9;
		else if (array[i] <= 'Z') sum += 10;
	}
	printf("%d", sum);
	return 0;
}