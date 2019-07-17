#include <stdio.h>
int main() {
	char black[8][8] = {
		{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" }
	};

	char white[8][8] = {
		{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" }
	};

	int n, m;
	scanf("%d %d", &n, &m);
	char arr[50][50];
	int check = 250;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			scanf(" %c", &arr[i][j]);
		}
	}

	for (int i = 0; i + 7<n; i++) {
		for (int j = 0; j + 7<m; j++)
		{
			int count1 = 0;
			int count2 = 0;
			for (int a = 0; a<8; a++)
			{
				for (int b = 0; b<8; b++)
				{
					if (arr[i + a][j + b] != black[a][b]) count1++;
					if (arr[i + a][j + b] != white[a][b]) count2++;
				}
			}
			if (check>count1 || check>count2)
				check = count1<count2 ? count1 : count2;
		}
	}
	printf("%d", check);
	return 0;
}
//arr 입력시 %c 띄어쓰기 해주지않아서 오류 발생
//for문 반복문 설정