#include <iostream>
#include <vector>
using namespace std;

vector <int> v;

int main() {
	int N, B;
	cin >> N >> B;

	while (N != 0) {
		v.push_back(N % B);
		N /= B;
	}

	vector<int>::reverse_iterator iter;

	for (iter = v.rbegin(); iter < v.rend(); iter++) {
		if (*iter >= 10) {
			char c = *iter - 10 + 'A';
			cout << c;
		}
		else {
			cout << *iter;
		}
	}

	return 0;
}