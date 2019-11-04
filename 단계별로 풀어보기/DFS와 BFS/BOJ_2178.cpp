#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define MAX_SIZE 101

int N, M, cnt = 1;
int mat[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];
int check[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

/*bool isTrue(int a, int b) {
	return ((a > 0 && a <= N) && (b > 0 && b <= M));
}*/

void bfs(int x, int y) {
	//queue pair을 처음 배웠다.
	queue<pair<int, int> > q;
	q.push(pair<int, int>(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		visited[x][y] = 1;

		for (int i = 0; i < 4; i++) {
			int dx = x + check[i][0];
			int dy = y + check[i][1];
			//if (dx<1 || dx>N || dy<1 || dy>M) continue;
			if (/*isTrue(dx, dy) &&*/ mat[dx][dy] == 1 && visited[dx][dy]!=1) {
				q.push(pair<int, int>(dx, dy));
				mat[dx][dy] = mat[x][y] + 1;
			}
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			scanf("%1d", &mat[i][j]);
		}
	}

	bfs(1, 1);

	printf("%d\n", mat[N][M]);

	return 0;
}