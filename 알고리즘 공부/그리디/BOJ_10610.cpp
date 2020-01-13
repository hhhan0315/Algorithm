#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string N;

int main() {
	cin >> N;

	sort(N.rbegin(), N.rend());

	int sum = 0;
	for (int i = 0; i < N.size(); i++) {
		sum += N[i] - '0';
	}

	if (sum % 3 == 0 && N[N.size()-1]=='0') {
		cout << N;
	}
	else {
		cout << "-1";
	}


	return 0;
}