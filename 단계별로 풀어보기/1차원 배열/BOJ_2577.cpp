#include <stdio.h>
int main() {
	int array[3];
	int result[10] = { 0 };
	int max = 1;
	int k;

	for (int i = 0; i<3; i++) {
		scanf("%d", &array[i]);
		max *= array[i];
	}
	while (max>0) {
		k = max % 10;
		result[k] = result[k] + 1;
		max = max / 10;
	}
	for (int i = 0; i<10; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}