#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define SIZE 101

int N, M, cnt;
int arr[SIZE][SIZE];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
queue<pair<int, int> > q;

int bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextX = x + dx[i];
			int nextY = y + dy[i];
			if (0 < nextX && nextX <= N && 0 < nextY && nextY <= M) {
				if (arr[nextX][nextY] == 1) {
					arr[nextX][nextY] = arr[x][y] + 1;
					q.push(make_pair(nextX, nextY));
					cnt = arr[nextX][nextY];
				}
			}
		}
	}
	return arr[N][M];
}

int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	q.push(make_pair(1, 1));

	cout << bfs() << "\n";

	return 0;
}