#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i<n; i++) {
		unsigned int start, end; //부호가 항상 양수
		scanf("%d %d", &start, &end);
		int a = 1;
		while (1) {
			if (end - start > a*(a + 1)) a++;
			else break;
		}
		if (end - start > a*a) printf("%d\n", 2 * a);
		else printf("%d\n", (2 * a) - 1);
	}

	return 0;
}