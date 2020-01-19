#include <iostream>
#include <vector>
using namespace std;

bool visited[9];
int N;
vector <int> v;

void permutation(bool visited[9]) {
	if (v.size() == N) {
		for (int i = 0; i < N; i++) {
			cout << v[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = 1;
			v.push_back(i);
			permutation(visited);
			visited[i] = 0;
			v.pop_back();
		}
	}

}

int main() {
	cin >> N;
	
	permutation(visited);

	return 0;
}