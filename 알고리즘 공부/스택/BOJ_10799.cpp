#include <iostream>
#include <stack>
#include <string>
using namespace std;

int count(string str) {
	stack<char> st;
	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			st.push(str[i]);
		}
		else {
			st.pop();
			if (str[i - 1] == '(') {
				count += st.size();
			}
			else {
				count++;
			}
		}
	}

	return count;
}


int main() {
	string str;
	cin >> str;

	cout << count(str);
	return 0;
}