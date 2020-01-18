#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/*
처음에 각각의 배열 비교로 해결하려고 하고 오류 발생했고 배열과 재귀의 구성도 생각나지 않아서
책을 참조해서 해결했다.
*/

bool areFriends[10][10];
int n;

int countPartner(bool taken[10]) {
	int firstStudent = -1;

	for (int i = 0; i < n; i++) {
		if (!taken[i]) {
			firstStudent = i;
			break;
		}
	}

	if (firstStudent == -1)
		return 1;
	int ret = 0;
	for (int i = firstStudent + 1; i < n; i++) {
		if (!taken[i] && areFriends[firstStudent][i]) {
			taken[firstStudent] = taken[i] = true;
			ret += countPartner(taken);
			taken[firstStudent] = taken[i] = false;
		}
	}
	return ret;
}
/*
2번째 입력인 n=4, m=6
[0][1]=[1][0]=true; [1][2]=[2][1]=true; [2][3]=[3][2]=true;
[3][0]=[0][3]=true; [0][2]=[2][0]=true; [1][3]=[3][1]=true;

areFriends[0][1] -> [2][3] -> ret=1;
areFriends[0][2] -> [1][3] -> ret=2;
areFriends[0][3] -> [1][2] -> ret=3;
*/

int main()
{
	int C;
	//taken[i] : i번째 학생이 짝을 찾으면 true, 아니면 false
	bool taken[10];
	scanf("%d", &C);

	while (C--)
	{
		int m;
		scanf("%d %d", &n, &m);

		//초기화
		memset(areFriends, false, sizeof(areFriends));
		memset(taken, false, sizeof(taken));

		for (int i = 0; i < m; i++)
		{
			int student1, student2;
			scanf("%d %d", &student1, &student2);
			//이 부분이 특별했다.
			areFriends[student1][student2] = areFriends[student2][student1] = true;
		}

		printf("%d\n", countPartner(taken));

	}

	return 0;
}
