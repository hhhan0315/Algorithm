#include <stdio.h>
int main() {
	int x[4];
	int y[4];
	int a, b;
	for (int i = 1; i<4; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 1; i<4; i++) {
		for (int j = i + 1; j<4; j++)
		{
			if (x[i] == x[j]) a = x[i^j];
			if (y[i] == y[j]) b = y[i^j];
		}
	}

	printf("%d %d", a, b);
	return 0;
	//j=i+1 ���� �ʿ�
	//^ : XOR�� �ǹ� ���ÿ��� x[2]==x[3]�� �� a�� x[2 xor 3] -> 10 XOR 11 -> 01 -> 1

}