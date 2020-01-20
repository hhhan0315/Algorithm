#include <iostream>
#include <cstdio>
using namespace std;

long long standard = 2000000000;

int makeRatio(long long game, long long win) {
	return (win * 100) / game;
}

int neededGames(long long game, long long win) {
	//game과 win이 똑같다 = 연승 수 출력 불가
	if (makeRatio(game, win) == makeRatio(game + standard, win + standard))
		return -1;

	long long lo, hi;
	lo = 0; hi = standard;
	//lo=1, lo<=hi 조건을 했었는데 무한루프로 오류
	while (lo + 1 < hi) {
		long long mid = (lo + hi) / 2;
		//추가설명
		//lo게임 이기면 승률 변화 X, hi게임 이기면 승률 변화
		if (makeRatio(game, win) == makeRatio(game + mid, win + mid))
			lo = mid;
		else
			hi = mid;
	}
	return hi;
}

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		long long N, M;
		scanf("%lld %lld", &N, &M);

		printf("%d\n", neededGames(N, M));
	}

	return 0;
}