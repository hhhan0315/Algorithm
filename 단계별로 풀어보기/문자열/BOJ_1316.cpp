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

	//array가 101인 이유는 마지막에 null이 포함되기 때문에 100글자이면 101 선언
	//계속 틀린이유가 int alpabet[26]={0};을 for문 밖에 놔둬서 각각 문자를 입력받을 때마다 새로운 배열에 for문이 돌아가지 않아서 틀림
}