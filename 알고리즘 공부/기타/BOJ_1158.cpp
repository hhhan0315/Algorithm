#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main() {
	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";
	while (1) {
		if (q.size() == 1) {
			cout << q.front();
			q.pop();
			break;
		}
		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}
		
		cout << q.front() << ", ";
		q.pop();
	}
	cout << ">";
	return 0;
}