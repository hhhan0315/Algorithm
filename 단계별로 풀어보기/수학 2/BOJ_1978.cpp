#include <stdio.h>
int main() {
	int num, n, count = 0;
	int array[1001] = { 0,1 };

	scanf("%d", &num);

	for (int i = 0; i<num; i++) {
		scanf("%d", &n);
		for (int i = 2; i <= n; i++) {
			for (int j = 2; i*j <= n; j++) {
				array[i*j] = 1;
			}
		}
		if (array[n] != 1) count++;
	}
	printf("%d", count);
	return 0;
	//for�� array[i*j]=1; �� �ۿ� �־��� ���� ������ ����� ���� �� 1�� ǥ�õǾ�
	//Ʋ�Ⱦ��µ� for�� �ȿ� ������ִ� �ذ�Ǿ���. ���� �Ѿ�� debug �߻�
}