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
	//char���´� -'0'�� ���ָ� ���ڷ� �ٲ��.   �ƴϸ� ascii �ڵ忡���� '0'�� 48�̱⶧���� -48�� �����ϴ�.
}