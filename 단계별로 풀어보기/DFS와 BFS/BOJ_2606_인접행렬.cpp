#include <iostream>
using namespace std;
#define MAX_SIZE 101

int mat[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
int N, M, x, y;
int result=0;

void dfs(int v) {
	visited[v] = 1;

	for (int i = 1; i <= N; i++) {
		if (mat[v][i] == 1 && visited[i] == 0) {
			result++;
			dfs(i);
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		mat[x][y] = mat[y][x] = 1;
	}

	dfs(1);
	cout << result << endl;
	return 0;
}