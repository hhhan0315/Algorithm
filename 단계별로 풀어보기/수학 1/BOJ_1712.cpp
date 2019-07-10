#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int p = c - b;
	if (p < 1) printf("-1");
	else printf("%d", (a / p) + 1);
	return 0;
}