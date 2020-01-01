#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	int N, data;
	cin >> N;
	deque <int> dq;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push_front") {
			cin >> data;
			dq.push_front(data);
		}
		else if (str == "push_back") {
			cin >> data;
			dq.push_back(data);
		}
		else if (str == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
				cout << "-1" << "\n";
		}
		else if (str == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
				cout << "-1" << "\n";
		}
		else if (str == "size") {
			cout << dq.size() << "\n";
		}
		else if (str == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (str == "front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else
				cout << "-1" << "\n";
		}
		else if (str == "back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else
				cout << "-1" << "\n";
		}
	}
	return 0;
}