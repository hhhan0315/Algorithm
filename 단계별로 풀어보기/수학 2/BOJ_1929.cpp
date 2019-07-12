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
}//에라토스테네스의 체
//visual studio에서 왜 입력받지도 않고 스스로 종료 오류 발생
