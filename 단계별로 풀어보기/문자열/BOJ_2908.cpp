#include <stdio.h>
int main() {
	int array[2];
	int a, b, c;
	int max = 0;
	for (int i = 0; i<2; i++) {
		scanf("%d", &array[i]);
		a = (array[i] / 100);
		b = (array[i] % 100) / 10;
		c = (array[i] % 100) % 10;
		array[i] = (100 * c) + (10 * b) + a;
		if (array[i]>max) max = array[i];
	}
	printf("%d", max);
	return 0;
}