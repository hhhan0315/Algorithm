#include <stdio.h>

int main() {
	int num;
	int count = 0;
	char array[101];
	scanf("%d", &num);

	for (int i = 0; i<num; i++) {
		scanf("%s", &array);
		int alpabet[26] = { 0 };
		for (int j = 0; array[j] != NULL; j++)
		{
			if (array[j] == array[j + 1]) continue;
			else alpabet[array[j] - 'a']++;
		}
		for (int k = 0; k<26; k++)
		{
			if (alpabet[k]>1) {
				count++;
				break;
			}
		}
	}
	printf("%d", num - count);
	return 0;

	//array�� 101�� ������ �������� null�� ���ԵǱ� ������ 100�����̸� 101 ����
	//��� Ʋ�������� int alpabet[26]={0};�� for�� �ۿ� ���ּ� ���� ���ڸ� �Է¹��� ������ ���ο� �迭�� for���� ���ư��� �ʾƼ� Ʋ��
}