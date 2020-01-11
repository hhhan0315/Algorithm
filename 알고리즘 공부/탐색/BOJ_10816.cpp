#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int N, M;

int main() {
	scanf("%d", &N);
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int num;
		scanf("%d", &num);

		printf("%d ", upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num));
	}

	return 0;
}
//upperbound(10) : 10�� ���������� �����ϴ� ��ġ +1
//lowerbound(10) : 10�� ó������ �����ϴ� ��ġ
//sort�� �� ��밡��