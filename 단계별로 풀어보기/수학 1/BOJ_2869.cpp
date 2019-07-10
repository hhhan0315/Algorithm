#include <stdio.h>
int main() {
	int a, b, v;
	int sum;

	scanf("%d %d %d", &a, &b, &v);
	sum = ((v - b - 1) / (a - b)) + 1;
	printf("%d", sum);
}