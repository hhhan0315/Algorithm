#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define SIZE 10001

int n, parent, child, weight;
vector<pair<int, int> > v[SIZE];
int visited[SIZE];
int max_dis, max_node;

void dfs(int node, int dis) {
	visited[node] = 1;

	if (dis > max_dis) {
		max_dis = dis;
		max_node = node;
	}
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i].first;
		int ndis = v[node][i].second;
		if (!visited[next])
			dfs(next, dis + ndis);
	}
}

int main() {
	cin >> n;
	for (int i = 2; i <= n; i++) {
		cin >> parent >> child >> weight;
		v[parent].push_back(make_pair(child, weight));
		v[child].push_back(make_pair(parent, weight));
	}

	dfs(1, 0);
	memset(visited, 0, sizeof(visited));
	dfs(max_node, 0);
	cout << max_dis << "\n";

	return 0;
}