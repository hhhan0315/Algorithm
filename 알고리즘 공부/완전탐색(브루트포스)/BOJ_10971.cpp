#include <iostream>
using namespace std;

int N;
int W[11][11];
int min_cost = 4000000;
int visited[11];

void dfs(int start, int x, int sum, int cnt) {
	//모든 도시 돌고 다시 start로 돌아옴
	if (cnt == N && start == x) {
		if (min_cost > sum) min_cost = sum;
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (W[x][i] == 0) continue; //자기 자신 방문일 때 

		if (!visited[x] && W[x][i] > 0) {
			visited[x] = 1;
			sum += W[x][i];

			//조건으로 인해 시간 감소
			if (sum <= min_cost) {
				dfs(start, i, sum, cnt + 1);
			}

			visited[x] = 0;
			sum -= W[x][i];
		}
	}
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> W[i][j];
		}
	}

	for (int i = 1; i <= N; i++) {
		dfs(i, i, 0, 0);
	}
	//각각 1,2,3,4 에서 시작

	cout << min_cost;
	return 0;
}