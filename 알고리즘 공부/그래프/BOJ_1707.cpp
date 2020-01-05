#include <iostream>
#include <vector>
using namespace std;
#define SIZE 20001
#define RED 1
#define BLUE 2

//int mat[SIZE][SIZE];
vector<int> v[SIZE];
int visited[SIZE];
int V, E;

void dfs(int node, int color) {
	visited[node] = color;
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];
		if (visited[next] == 0)
			dfs(next, 3 - color);
	}
}

int main() {
	int K;
	cin >> K;

	while (K--) {
		cin >> V >> E;
		
		for (int i = 1; i <= V; i++) {
			v[i].clear();//clear -> new data
			visited[i] = 0;
		}
		
		for (int i = 0; i < E; i++) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}

		for (int i = 1; i <= V; i++) {
			if (visited[i] == 0)
				dfs(i, RED);
		}

		bool check = 1;
		for (int i = 1; i <= V; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				int k = v[i][j];
				if (visited[i] == visited[k])
					check = 0;
			}
		}

		if (check == 1)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}