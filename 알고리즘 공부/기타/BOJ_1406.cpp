#include <iostream>
#include <string>
#include <list>
using namespace std;

list<char> lt;

int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		lt.push_back(c);
	}
	list<char>::iterator begin = lt.begin();
	list<char>::iterator end = lt.end(); //auto end=lt.end();

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string order;
		cin >> order;

		if (order == "P") {
			char c;
			cin >> c;
			lt.insert(end, c);
		}
		else if (order == "L") {
			if (end != lt.begin())
				end--;
		}
		else if (order == "D") {
			if (end != lt.end())
				end++;
		}
		else if (order == "B") {
			if (end != lt.begin()) {
				end--;
				end = lt.erase(end);
			}
		}
	}

	for (char c : lt)
		cout << c;

	return 0;
}