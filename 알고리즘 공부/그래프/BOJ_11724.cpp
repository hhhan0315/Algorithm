#include <iostream>
using namespace std;
#define SIZE 1000

int mat[SIZE][SIZE];
int visited[SIZE];
int N, M;

void dfs(int v) {
	if (visited[v] == 0) {
		visited[v] = 1;
		for (int i = 0; i < N; i++) {
			if (mat[v][i] == 1 && visited[i] == 0) {
				dfs(i);
			}
		}
	}
}

int main() {
	cin >> N >> M;

	// 0<=M 
	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		u -= 1;
		v -= 1;

		mat[u][v] = mat[v][u] = 1;
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (visited[i] == 0) {
			count++;
			dfs(i);
		}
	}
	cout << count;

	return 0;
}