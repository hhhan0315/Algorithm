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
	//끝나는 시간이 같으면 시작 시간이 빠른 게 먼저
	else
		return a.end < b.end;
	//같지 않다면 끝나는 시간이 빠른 게 먼저
}

int main() {
	int n;
	cin >> n;

	vector<Time> v(n);
	//v만 적었을 때 런타임 오류 발생
	//v : 빈 컨테이너 // v(n) : n개의 원소를 가짐

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
//last는 종료지점 저장