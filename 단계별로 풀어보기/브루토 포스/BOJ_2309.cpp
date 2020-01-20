#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*틀림
bool check = false;
void solve(vector<int> choose, int sum, vector<int> dwarf, int s) {
	if (sum == 100) {
		for (int i = 0; i < choose.size(); i++)
			cout << choose[i] << "\n";
		check=true;
		return;
	}

	for (int i = s; i < dwarf.size(); i++) {
		choose.push_back(dwarf[i]);
		sum += dwarf[i];
		solve(choose, sum, dwarf, i+1);
		if (check) break;
		sum -= dwarf[i];
		choose.pop_back();
	}
}
*/

void solve(int sum, int n, vector<int> dwarf) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (sum - dwarf[i] - dwarf[j] == 100) {
				for (int k = 0; k < n; k++) {
					if (k != i && k != j) {
						cout << dwarf[k] << "\n";
					}
				}
				return;
			}
		}
	}
}

int main() {
	vector<int> dwarf;
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		int height;
		cin >> height;
		dwarf.push_back(height);
		sum += height;
	}

	sort(dwarf.begin(), dwarf.end());

	solve(sum, 9, dwarf);

	return 0;
}