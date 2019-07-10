#include <stdio.h>

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);

	while (n > 0) {
		count++;
		n -= count;
	}
	if (count % 2 == 0) {
		printf("%d/%d", count + n, 1 + (-n));
	}
	else {
		printf("%d/%d", 1 + (-n), count + n);
	}
	return 0;
}