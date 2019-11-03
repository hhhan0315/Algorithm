#include <iostream>
#include <cstdio>
using namespace std;
#define MAX_SIZE 51

int mat[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE * MAX_SIZE];
int result[MAX_SIZE * MAX_SIZE];
int check[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} }; //상하좌우

int T, M, N, K;
int X, Y;
int cnt = 0;

//범위 안 체크
bool isTrue(int a, int b) {
	return ((a >= 0 && a < M) && (b >= 0 && b < N));
}

void dfs(int x, int y) {
	mat[x][y] = 0;
	visited[cnt]++;

	for (int i = 0; i < 4; i++) {
		int dx = x + check[i][0];
		int dy = y + check[i][1];
		if (isTrue(dx, dy) && mat[dx][dy] == 1)
			dfs(dx, dy);
	}

}

//초기화
void init() {
	mat[MAX_SIZE][MAX_SIZE] = 0;
	visited[MAX_SIZE * MAX_SIZE] = 0;
	cnt = 0;
}

int main() {
	scanf("%d", &T);
	for (int tc = 0; tc < T; tc++) {
		init();
		scanf("%d %d %d", &M, &N, &K);
		for (int kc = 0; kc < K; kc++) {
			scanf("%d %d", &X, &Y);
			mat[X][Y] = 1;
		}

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (mat[i][j] == 1) {
					cnt++;
					dfs(i, j);
				}
			}
		}

		result[tc] = cnt;
	}

	for (int tc = 0; tc < T; tc++) {
		printf("%d\n", result[tc]);
	}

	return 0;
}