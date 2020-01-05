#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 400000

int A, P;
int visited[SIZE];

void dfs(int a) {
	visited[a]++;
	if (visited[a] == 3)
		return;
	int next = 0;
	while (a != 0) {
		next += pow(a % 10, P);
		a /= 10;
	}
	dfs(next);
}
//pox(x,y) : x^y

int main() {
	cin >> A >> P;
	dfs(A);

	int result = 0;
	for (int i = 0; i < SIZE; i++) {
		if (visited[i] == 1)
			result++;
	}
	cout << result << "\n";
	return 0;
}