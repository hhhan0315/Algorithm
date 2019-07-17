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
//처음부터 어떻게 푸는지 아예 생각을 못함
//while문을 이용해 그냥 하나씩 더하면서 이게 몇번째로 성립하는지를 계속 실행해야한다.