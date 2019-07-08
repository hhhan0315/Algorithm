#include <stdio.h>

int main() {
	int num, i;
	char array[100];
	int sum = 0;
	scanf("%d", &num);
	scanf("%s", &array);

	for (i = 0; i < num; i++) {
		//sum += array[i] -'0';
		sum += array[i] - 48;
	}

	printf("%d", sum);
	return 0;
	//char형태는 -'0'을 해주면 숫자로 바뀐다.   아니면 ascii 코드에서는 '0'이 48이기때문에 -48도 가능하다.
}