#include <iostream>
#include <queue>
using namespace std;
#define SIZE 1000

int mat[SIZE][SIZE];
int visited[SIZE];
int visited2[SIZE];

int n, m, v, a, b;

void dfs(int v) {
	cout << v << ' ';
	visited[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (mat[v][i] == 1 && visited[i] == 0) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	queue<int> q;
	q.push(v);
	visited2[v] = 1;
	while (!q.empty()) {
		v = q.front();
		cout << v << ' ';
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (mat[v][i] == 1 && visited2[i] == 0) {
				visited2[i] = 1;
				q.push(i);
			}
		}
	}
}


int main() {
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		mat[a][b] = mat[b][a] = 1;
	}
	dfs(v);
	cout << "\n";
	bfs(v);
	return 0;
}