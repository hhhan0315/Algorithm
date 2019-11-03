#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define MAX_SIZE 26

char mat[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE * MAX_SIZE];
int N, cnt = 0;
int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };
//�����¿� �� �� DFS ����

bool isInside(int a, int b) {
	return (a > 0 && a <= N) && (b > 0 && b <= N);
}

void dfs(int x, int y) {
	mat[x][y] = '0'; //������ ���� 0���� �ʱ�ȭ
	visited[cnt]++;
	for (int i = 0; i < 4; i++) {
		int dx = x + dir[i][0];
		int dy = y + dir[i][1];

		if (isInside(dx, dy) && mat[dx][dy] == '1') {
			dfs(dx, dy);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (mat[i][j] == '1') {
				cnt++;
				dfs(i, j);
			}
		}
	}

	sort(visited, visited + cnt + 1);
	//���� 1���� ������ױ� ������

	cout << cnt << endl;
	for (int i = 1; i <= cnt; i++) {
		cout << visited[i] << endl;
	}

	return 0;

}