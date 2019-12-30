#include <iostream>
#include <stack>
#include <string>
#define TRUE 1
#define FALSE 0
using namespace std;

bool check(string str) {
	stack<char> st;
	for (int j = 0; j < str.length(); j++) {
		char c = str[j];

		if (c == '(') {
			st.push(c);
		}
		else {
			if (!st.empty()) {
				st.pop();
			}
			else {
				return false;
			}
		}
	}
	return st.empty();
}

int main() {
	int T;
	cin >> T;

	string str;

	for (int i = 0; i < T; i++) {
		cin >> str;
		if (check(str))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}