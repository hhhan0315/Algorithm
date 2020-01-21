#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int N, K;
	scanf("%d %d", &N, &K);

	int lo = 1, hi = K;
	int ans;

	while (lo <= hi) {
		long long cnt = 0;
		int mid = (lo + hi) / 2;
		for (int i = 1; i <= N; i++) {
			cnt += min(mid / i, N); //cnt = mid보다 작거나 같은 j의 수(i*j<=mid)
		}

		if (cnt < K)
			lo = mid + 1;
		else
			hi = mid - 1, ans = mid;
	}
	printf("%d", ans);

	return 0;

	/*
	while(lo<hi), int cnt 라고 해서 오류
	푸는 방법도 처음에 생각하지 못했다.
	*/
}