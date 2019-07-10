#include <stdio.h>
int main() {
	int num;
	int a;
	scanf("%d", &num);
	a = num / 5;
	if (num % 5 != 0) {
		for (a = num / 5; a >= 0; a--)
		{
			if ((num - 5 * a) % 3 == 0) {
				a += (num - 5 * a) / 3;
				break;
			}
		}
	}
	printf("%d", a);
	return 0;
}