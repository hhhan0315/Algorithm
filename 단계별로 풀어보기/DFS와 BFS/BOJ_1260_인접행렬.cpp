#include <iostream>
#include <queue>
using namespace std;
#define MAX_SIZE 1001

int mat[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
int visited2[MAX_SIZE];

int N, M, V;
int a, b;

void dfs(int v) {
	cout << v << ' ';
	visited[v] = 1;
	for (int i = 1; i <= N; i++) {
		if (mat[v][i] == 1 && visited[i] == 0) {
			dfs(i); //재귀사용
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
		for (int i = 1; i <= N; i++) {
			if (mat[v][i] == 1 && visited2[i] == 0) {
				visited2[i] = 1;
				q.push(i);
			}
		}
	}
}

int main() {	
	cin >> N >> M >> V;
	
	for (int i = 0; i < M; i++){
		cin >> a >> b;
		mat[a][b] = mat[b][a] = 1;
	}//인접행렬 활용(무방향그래프)
	dfs(V);
	cout << endl;
	bfs(V);
	return 0;
}