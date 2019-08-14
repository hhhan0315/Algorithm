#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time {
	int start;
	int end;
};

bool compare(Time a, Time b) {
	if (a.end == b.end)
		return a.start < b.start;
	//������ �ð��� ������ ���� �ð��� ���� �� ����
	else
		return a.end < b.end;
	//���� �ʴٸ� ������ �ð��� ���� �� ����
}

int main() {
	int n;
	cin >> n;

	vector<Time> v(n);
	//v�� ������ �� ��Ÿ�� ���� �߻�
	//v : �� �����̳� // v(n) : n���� ���Ҹ� ����

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].start >> v[i].end;
	}

	sort(v.begin(), v.end(), compare);

	int count = 0;
	int last = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (last <= v[i].start)
		{
			last = v[i].end;
			count++;
		}
	}

	cout << count;
	return 0;
}
//last�� �������� ����