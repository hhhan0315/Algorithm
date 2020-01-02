#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		v.push_back(i);

	int pos = 0;
	cout << "<";
	while (1) {
		if (v.size() == 1) {
			cout << v[0];
			break;
		}
		pos += K - 1;
		if (pos >= v.size())
			pos %= v.size();

		cout << v[pos] << ", ";
		v.erase(v.begin() + pos);
	}
	cout << ">";
	return 0;
}