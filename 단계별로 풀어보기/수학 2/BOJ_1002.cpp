#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1, y1, r1, x2, y2, r2;
	double distance;
	int n, r, d;
	cin >> n;

	while (n--)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
		r = r1 + r2;
		d = abs(r1 - r2);

		if (r1 == r2 && x1 == x2 && y1 == y2) //아예 원이 같을 경우(무한대)
			cout << -1;
		else if (distance > r) // 두 원이 멀리 떨어져 만나지 않는 경우
			cout << 0;
		else if (distance == r) //외접할 때(한점에서 만남)
			cout << 1;
		else if (r > distance) // 두 원이 접하지 않을 때
		{
			if (distance > d) // 두점에서 만날때
				cout << 2;
			else if (distance == d) //내접할 때
				cout << 1;
			else if (d > distance) //작은 원이 큰 원 내부에 있으면서 만나지 않음
				cout << 0;
		}
		cout << "\n";
	}
	return 0;
}

//sqrt(n) : n의 제곱근
//abs(n) : n의 절대값
//pow(n,m) : n의 m 제곱