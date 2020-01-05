#include <iostream>
#include <cstring> //memset
using namespace std;
#define SIZE 100001

int arr[SIZE];
int visited[SIZE];
int done[SIZE];
int n, cnt;

void init() {
	cnt = 0;
	memset(arr, 0, sizeof(arr));
	memset(visited, 0, sizeof(visited));
	memset(done, 0, sizeof(done));
	//memset : faster than for
	//arr, visited, done -> all data 0
}

void dfs(int node) {
	visited[node] = 1;
	int next = arr[node];

	if (!visited[next])
		dfs(next);
	else if (!done[next]) {
		for (int i = next; node != i; i = arr[i])
			cnt++;
		cnt++;
	}
	done[node] = 1;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		cin >> n;
		init();

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}

		for (int i = 1; i <= n; i++) {
			if (!visited[i])
				dfs(i);
		}
		cout << n - cnt << "\n";
	}
	return 0;
}