#include <iostream>
#include <queue>
using namespace std;
#define SIZE 1001

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int arr[SIZE][SIZE];
int M, N, cnt;
queue<pair<int, int> > q;

int bfs() {

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int j = 0; j < 4; j++) {
			int nx = x + dx[j];
			int ny = y + dy[j];

			if (0 <= nx && nx < N && 0 <= ny && ny < M && arr[nx][ny] == 0) {
				arr[nx][ny] = arr[x][y] + 1;
				q.push(make_pair(nx, ny));
				cnt = arr[nx][ny];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 0)
				return -1;
		}
	}
	if (cnt == 0) return 0;
	return cnt - 1;
}

int main() {
	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 1)
				q.push(make_pair(i, j));
		}
	}

	cout << bfs() << "\n";

	return 0;
}
//cf:https://atez.kagamine.me/21