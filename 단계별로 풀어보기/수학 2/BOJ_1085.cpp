#include <stdio.h>
int main() {
	int array[4];
	int min = 0;
	scanf("%d %d %d %d", &array[0], &array[1], &array[2], &array[3]);
	array[2] = array[2] - array[0];
	array[3] = array[3] - array[1];

	min = array[0];

	for (int i = 0; i<4; i++) {
		if (min > array[i]) min = array[i];
	}
	printf("%d", min);
	return 0;
	//�Ÿ��� ���� (0,0)���κ��� �Ÿ��� �� ª�� ���� �ִٴ� ���� �������� ���ؼ� ���� �߻�
}