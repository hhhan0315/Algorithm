#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void convert(int sum, int b) {
	if (sum == 0) {
		return;
	}
	convert(sum / b, b);
	cout << sum % b << " ";
}

int main() {
	int a, b;
	int m;
	cin >> a >> b;
	cin >> m;

	int n;

	for (int i = 0; i < m; i++) {
		cin >> n;
		v.push_back(n);
	}

	int temp = 1;
	int sum = 0;
	vector<int>::reverse_iterator iter;

	for (iter = v.rbegin(); iter < v.rend(); iter++) {
		sum += *iter * temp;
		temp *= a;
	}

	convert(sum, b);

	return 0;
}