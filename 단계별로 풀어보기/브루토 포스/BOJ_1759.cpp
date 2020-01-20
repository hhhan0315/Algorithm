#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L, C;

bool check(vector<char> answer) {
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < answer.size(); i++) {
		if (answer[i] == 'a' || answer[i] == 'e' || answer[i] == 'i'
			|| answer[i] == 'o' || answer[i] == 'u')
			cnt1++;
		else {
			cnt2++;
		}
	}

	if (cnt1 > 0 && cnt2 > 1)
		return true;
	else
		return false;
}

void solve(vector<char> answer, int s, vector<char> pass) {
	if (answer.size() == L) {
		if (check(answer)) {
			for (int i = 0; i < answer.size(); i++)
				cout << answer[i];
			cout << "\n";
		}
	}
	for (int i = s; i < pass.size(); i++) {
		answer.push_back(pass[i]);
		solve(answer, i + 1, pass);
		answer.pop_back();
	}
}

int main() {
	cin >> L >> C;

	vector <char> pass;
	for (int i = 0; i < C; i++) {
		char c;
		cin >> c;
		pass.push_back(c);
	}

	sort(pass.begin(), pass.end());

	vector <char>answer;
	solve(answer, 0, pass);

	return 0;
}