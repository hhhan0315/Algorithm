#include <stdio.h>

int find(int n) {
	int a, b, c;
	int count = 0;
	if (n < 100) return n;
	else {
		for (int i = 100; i <= n; i++)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;
			if ((a - b) == (b - c)) count++;
		}
		return 99 + count;
	}
}

int main() {
	int in, out;
	scanf("%d", &in);
	out = find(in);
	printf("%d", out);
	return 0;
}