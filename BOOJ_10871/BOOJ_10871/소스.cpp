#include <stdio.h>
int main() {
	int a, b;
	int c;
	scanf("%d %d", &a, &b);
	for (int i = 0; i<a; i++) {
		scanf("%d", &c);
		if (c<b) {
			printf("%d ", c);
		}
	}
	return 0;
}