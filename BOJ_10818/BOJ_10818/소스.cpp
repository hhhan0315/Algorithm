#include <stdio.h>
int main() {
	int a, b;
	int min, max;
	scanf("%d", &a);
	for (int i = 0; i<a; i++) {
		scanf("%d", &b);
		if (i == 0) {
			min = b;
			max = b;
		}
		else {
			if (b <= min) min = b;
			if (b >= max) max = b;
		}
	}
	printf("%d %d", min, max);
	return 0;
}