#include <stdio.h>
void hanoi(int n, int a, int b, int c) {
	if (n == 1) printf("%d %d\n", a, c);
	else {
		//1->2
		hanoi(n - 1, a, c, b);
		//1->3
		printf("%d %d\n", a, c);
		//2->3
		hanoi(n - 1, b, a, c);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", ((2 << (n - 1)) - 1));
	//2<<(n-1) = 2*2^n-1
	hanoi(n, 1, 2, 3);
	return 0;
}