#include <stdio.h>
int main() {
	int array[10] = { 0 };
	int result[42] = { 0 };
	int count = 0;
	for (int i = 0; i<10; i++) {
		scanf("%d", &array[i]);
		result[array[i] % 42]++;
	}
	for (int i = 0; i<42; i++) {
		if (result[i] > 0) count++;
	}

	printf("%d\n", count);

}