#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, s, e;
vector<pair<int, int> > v;

bool compare(const pair<int, int> a, const pair<int, int>b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s >> e;
		v.push_back(make_pair(s, e));
	}

	sort(v.begin(), v.end(), compare);

	int cnt = 0;
	int end = -1;
	
	for (int i = 0; i < N; i++) {
		if (v[i].first >= end) {
			end = v[i].second;
			cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}