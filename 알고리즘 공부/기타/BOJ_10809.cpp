#include <iostream>
#include <string>
using namespace std;

int arr[26];

int main() {
	string str;
	cin >> str;

	char c;

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (int i = 0; i < str.length(); i++) {
		c = str[i];
		if (arr[c - 'a'] == -1)
			arr[c - 'a'] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}