#include <stdio.h>

int main() {
	int num, temp;
	int arr[10001] = { 0 };
	scanf("%d", &num);

	for (int i = 0; i<num; i++) {
		scanf("%d", &temp);
		arr[temp]++;
	}

	for (int i = 1; i<10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j<arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
//���ο� i ������ arr[i]�� �ٷ� ����
//arr[i]�� ���� �ִ� ������ŭ i ���