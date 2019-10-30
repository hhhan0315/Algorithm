#include <iostream>
#include <vector>
#define MAX_SIZE 101
using namespace std;

int N, M, result=0;
vector<int> arr[MAX_SIZE];
int visited[MAX_SIZE];

void dfs(int v) {
	visited[v] = 1;

	for (int i = 0; i < arr[v].size(); i++) {
		int y = arr[v][i];
		result++;
		dfs(y);
	}
}

int main() {
	cin >> N >> M;

	for (int i = 1; i <= M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}

	dfs(1);
	cout << result;
	return 0;
}