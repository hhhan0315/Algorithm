#include <stdio.h>
int main() {
	int array[249613] = { 0,1 };
	int num;

	while (1) {
		int count = 0;
		scanf("%d", &num);
		if (num == 0) break;
		for (int i = 2; i <= 2 * num; i++) {
			for (int j = 2; i*j <= 2 * num; j++)
			{
				array[i*j] = 1;
			}
		}
		for (int i = num + 1; i <= 2 * num; i++) {
			if (array[i] != 1) count++;
		}
		printf("%d\n", count);
	}
	return 0;
	//�Էµ� num���� ū�� �����̾��µ� �� ������ ���� ���ؼ� ��� Ʋ��
}