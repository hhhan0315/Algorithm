#include <stdio.h>
int main() {
	int num;
	int k, n;
	int array[15][15] = { 0 };
	for (int i = 1; i<15; i++) {
		array[0][i] = i;
	}
	printf("%d", array[1][0]);
	for (int i = 1; i<15; i++) {
		for (int j = 1; j<15; j++) {
			array[i][j] = array[i-1][j] + array[i][j-1];
		}
	}
	printf("%d", array[1][1]);
	scanf("%d", &num);
	for(int i=0; i<num; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", array[k][n]);
	}
	return 0;
	//array �迭�� 0���� �ʱ�ȭ������ �ʾƼ� ��� array[1][0]�� ������ ���� �� ���
	//array �迭�� main ������ �������ָ� array[1][0]�� 0���� ���
}