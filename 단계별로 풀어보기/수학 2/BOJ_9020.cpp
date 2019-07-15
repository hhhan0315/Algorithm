#include <stdio.h>
int main() {
	int T, n;
	int array[10001] = { 0,1 };
	scanf("%d", &T);
	for (int i = 2; i<10001; i++) {
		for (int j = 2; i*j<10001; j++)
		{
			array[i*j] = 1;
		}
	}
	for (int i = 0; i<T; i++) {
		scanf("%d", &n);
		for (int i = n / 2; i>0; i--)
		{
			int a = i;
			int b = n - i;
			if (array[a] != 1 && array[b] != 1)
			{
				printf("%d %d\n", a, b);
				break;
			}
		}
	}
	return 0;
}