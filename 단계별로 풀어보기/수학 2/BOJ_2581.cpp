#include <stdio.h>
int main() {
	int a, b;
	int sum = 0;
	int min = 10000;
	int array[10001] = { 0,1 };
	scanf("%d %d", &a, &b);
	for (int i = 2; i <= b; i++) {
		for (int j = 2; i*j <= b; j++)
		{
			array[i*j] = 1;
		}
	}
	for (int i = a; i <= b; i++) {
		if (array[i] != 1)
		{
			sum += i;
			if (i<min)
			{
				min = i;
			}
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);
	return 0;
}
//에라토스테네스의 체 활용