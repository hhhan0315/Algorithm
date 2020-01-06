#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 51

int mat[SIZE][SIZE];
int visited[SIZE * SIZE];
int dir[8][2] = { {-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1} };
int cnt;
int w, h;

void init() {
	cnt = 0;
	memset(mat, 0, sizeof(mat));
}

void dfs(int x, int y) {
	mat[x][y] = 0;
	visited[cnt]++;
	for (int i = 0; i < 8; i++) {
		int dx = x + dir[i][0];
		int dy = y + dir[i][1];
		//if (dx >= h || dx < 0 || dy >= w || dy < 0)
			//continue;
		if (mat[dx][dy] == 1)
			dfs(dx, dy);
	}
}

int main() {
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		init();

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> mat[i][j];
			}
		}

		//i<w,j<h -> i<h,j<w
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (mat[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";

	}
	return 0;
}