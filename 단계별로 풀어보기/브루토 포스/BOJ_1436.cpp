#include<stdio.h>
int check(int n) {
	int a = 0;
	for (int i = n; i>0; i /= 10)
	{
		if (i % 10 == 6) a++;
		else a = 0;
		if (a == 3) return 1;
	}
	return 0;
}

int main() {
	int num, a = 0, n = 665;
	scanf("%d", &num);
	while (a<num) {
		n++;
		if (check(n))
		{
			a++;
		}
	}
	printf("%d", n);
	return 0;
}
//ó������ ��� Ǫ���� �ƿ� ������ ����
//while���� �̿��� �׳� �ϳ��� ���ϸ鼭 �̰� ���°�� �����ϴ����� ��� �����ؾ��Ѵ�.