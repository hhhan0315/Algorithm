#include <stdio.h>

int main() {
	int n;
	int range = 1;
	int count = 1;
	int temp = 1;
	scanf("%d", &n);
	while (1) {
		if (range > n) break;
		temp = 6 * count;
		count++;
		range += temp;
	}
	printf("%d", count);
	return 0;
}