#include <stdio.h>
int main() {
	int n;
	int a, b, c, d;
	int count = 0;
	scanf("%d", &n);
	int result = n;
	while (1) {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		count++;
		if (d == result) break;
	}
	printf("%d\n", count);
}