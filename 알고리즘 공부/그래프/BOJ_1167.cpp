#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define SIZE 1000001

vector<pair<int,int> > v[SIZE];
int visited[SIZE];
int a, b, c;
int max_dis, final_node;

void dfs(int node, int dis) {
	visited[node] = 1;

	if (dis > max_dis) {
		max_dis = dis;
		final_node = node;
	}

	for (int i = 0; i < v[node].size(); i++) {
		if (!visited[v[node][i].first])
			dfs(v[node][i].first, dis + v[node][i].second);
	}
}

int main() {
	int V;
	cin >> V;

	for (int i = 0; i < V; i++) {
		cin >> a;

		while (true) {
			cin >> b;
			if (b == -1) break;
			cin >> c;
			v[a].push_back(make_pair(b, c));
		}
	}

	dfs(1, 0); //임의의 정점에서 먼 거리 찾기
	max_dis = 0;
	memset(visited, 0, sizeof(visited));
	dfs(final_node, 0); //다시 해당 정점에서부터 먼 거리 찾기
	cout << max_dis;
	return 0;
}