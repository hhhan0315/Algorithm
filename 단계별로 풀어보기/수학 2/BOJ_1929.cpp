#include <stdio.h>
int main() {
	int a, b;
	int array[1000001] = { 0,1 };
	scanf("%d %d", &a, &b);
	for (int i = 2; i <= b; i++) {
		for (int j = 2; i*j <= b; j++)
		{
			array[i*j] = 1;
		}
	}
	for (int i = a; i <= b; i++) {
		if (array[i] != 1) printf("%d\n", i);
	}
	return 0;
}//�����佺�׳׽��� ü
//visual studio���� �� �Է¹����� �ʰ� ������ ���� ���� �߻�
