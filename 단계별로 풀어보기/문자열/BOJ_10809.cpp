#include <stdio.h>

int main() {
	char array[100];
	int num[26];
	scanf("%s", &array);
	for (int i = 0; i < 26; i++) {
		num[i] = -1;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < 100; j++)
		{
			if (array[j] == i)
			{
				num[i - 97] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", num[i]);
	}
	return 0;
	//�ҹ��� a~z�� �ƽ�Ű �ڵ� ���� 97~122
}