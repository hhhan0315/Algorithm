#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int array[1000];
	int max = 0;
	double average=0;
	for (int i = 0; i<n; i++) {
		scanf("%d", &array[i]);
		if (array[i]>max) max = array[i];
	}
	for (int i = 0; i<n; i++) {
		average += ((double)array[i] / max) * 100;
	}
	printf("%.2f", average / n);
	return 0;
	//����ȯ���� Ʋ�Ȱ� double�� ����, %.2f�� �Ҽ��� �ι�°�ڸ����� ǥ��
}