#include <iostream>
#include <vector>
using namespace std;

vector <int> origin;

void lotto(vector<int> solve, int s) {
	if (solve.size() == 6) {
		for (int i = 0; i < solve.size(); i++) {
			cout << solve[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int i = s; i < origin.size(); i++) {
		solve.push_back(origin[i]);
		lotto(solve, i + 1);
		solve.pop_back();
	}
}

int main() {
	while (true) {
		int k;
		cin >> k;
		if (k == 0) break;

		for (int i = 0; i < k; i++) {
			int num;
			cin >> num;
			origin.push_back(num);
		}

		vector <int> solve;
		lotto(solve, 0);
		cout << "\n";
		origin.clear();
	}

	return 0;
}