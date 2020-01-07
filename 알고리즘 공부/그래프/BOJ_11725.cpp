#include <iostream>
#include <vector>
using namespace std;
#define SIZE 100001

vector<int> v[SIZE];
int visited[SIZE];
int parent[SIZE];

void dfs(int node) {
	visited[node] = 1;
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];
		//if) node=1 , next=4, 6 -> parent[4]=1, parent[6]=1
		if (!visited[next]) {
			parent[next] = node;
			dfs(next);
		}
	}
}

int main(){
	int N;
	cin >> N;

	int a, b;
	for (int i = 0; i < N-1; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);

	for (int i = 2; i <= N; i++) {
		cout << parent[i] << "\n";
	}
	return 0;
}