#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
#define SIZE 101
#define MIN(a,b) (a>b)?b:a

int N, cnt = 1;
int arr[SIZE][SIZE];
int visited[SIZE][SIZE];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

bool check(int x, int y) {
	return 0 <= x && x < N && 0 <= y && y < N;
}

void dfs(int x, int y) {
	visited[x][y] = 1;
	arr[x][y] = cnt;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny)) {
			if (arr[nx][ny] == 1 && !visited[nx][ny])
				dfs(nx, ny);
		}
	}
}

int bfs(int cnt) {
	queue<pair<int, int> > q;
	memset(visited, 0, sizeof(visited));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == cnt) {
				visited[i][j] = 1;
				q.push(make_pair(i, j));
			}
		}
	}

	int step = 0;
	while (!q.empty()) {
		int qs = q.size();
		for (int qc = 0; qc < qs; qc++) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (!check(nx, ny))
					continue;
				if (arr[nx][ny] != 0 && arr[nx][ny] != cnt)
					return step;
				if (arr[nx][ny] == 0 && !visited[nx][ny]) {
					visited[nx][ny] = 1;
					q.push(make_pair(nx, ny));
				}
			}

		}
		step++;
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] && !visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	int result = 987654321;
	for (int i = 1; i < cnt; i++) {
		result = MIN(result, bfs(i));
	}

	cout << result << "\n";

	return 0;
}