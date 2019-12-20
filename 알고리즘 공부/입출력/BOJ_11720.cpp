#include <cstdio>

int main() {
	int n;
	/*
	int v;
	int sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &v);
		sum += v;
	}
	printf("%d", sum);
	*/

	char c[101];
	int sum = 0;
	scanf("%d", &n);
	scanf("%s", &c);
	for (int i = 0; i < n; i++) {
		sum += (c[i]-'0');
	}
	printf("%d", sum);
	return 0;
}