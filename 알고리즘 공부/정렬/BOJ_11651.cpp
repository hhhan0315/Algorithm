#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <pair<int, int> > v;

int main() {
	int N, x, y;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ y,x });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}