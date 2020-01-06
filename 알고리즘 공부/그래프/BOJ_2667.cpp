#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define SIZE 26

int mat[SIZE][SIZE];
int visited[SIZE * SIZE];
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int cnt = 0;

void dfs(int a, int b) {
	mat[a][b] = 0;
	visited[cnt]++;
	for (int i = 0; i < 4; i++) {
		int dx = a + dir[i][0];
		int dy = b + dir[i][1];

		if (mat[dx][dy] == 1) {
			dfs(dx, dy);
		}
	}
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &mat[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (mat[i][j] == 1) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	sort(visited, visited + cnt);
	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}