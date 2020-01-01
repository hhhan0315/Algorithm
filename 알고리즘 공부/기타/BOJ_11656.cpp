#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string>v;

int main() {
	string str;
	cin >> str;

	string temp;
	for (int i = 0; i < str.length(); i++) {
		temp = str.substr(i, str.length());
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	/*
	vector<string>::iterator iter = v.begin();

	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "\n";
	}
	*/

	//for(variable : array)
	for (string i : v)
		cout << i << "\n";

	return 0;
}