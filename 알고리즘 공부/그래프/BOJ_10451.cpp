#include <iostream>
#include <vector>
using namespace std;
#define SIZE 1001

vector<int> v[SIZE];
int visited[SIZE];
int N;

void dfs(int node) {
	visited[node] = 1;
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];
		if(visited[next]==0)
			dfs(next);
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> N;

		for (int i = 1; i <= N; i++) {
			v[i].clear();
			visited[i] = 0;
		}

		for (int i = 1; i <= N; i++) {
			int num;
			cin >> num;
			v[i].push_back(num);
		}

		int count = 0;
		for (int i = 1; i <= N; i++) {
			if (visited[i] == 0) {
				dfs(i);
				count++;
			}
		}
		cout << count << "\n";

	}
	return 0;
}