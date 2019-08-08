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

		if (r1 == r2 && x1 == x2 && y1 == y2) //�ƿ� ���� ���� ���(���Ѵ�)
			cout << -1;
		else if (distance > r) // �� ���� �ָ� ������ ������ �ʴ� ���
			cout << 0;
		else if (distance == r) //������ ��(�������� ����)
			cout << 1;
		else if (r > distance) // �� ���� ������ ���� ��
		{
			if (distance > d) // �������� ������
				cout << 2;
			else if (distance == d) //������ ��
				cout << 1;
			else if (d > distance) //���� ���� ū �� ���ο� �����鼭 ������ ����
				cout << 0;
		}
		cout << "\n";
	}
	return 0;
}

//sqrt(n) : n�� ������
//abs(n) : n�� ���밪
//pow(n,m) : n�� m ����