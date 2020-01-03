#include <iostream>
#include <cstdio>
using namespace std;
#define MIN(a,b) (a<b)?a:b

long long two[3];
long long five[3];

void divide(long long n, int flag) {
	long long t = 0;
	long long f = 0;
	for (long long i = 2; i <= n; i *= 2) {
		t += n / i;
	}
	for (long long i = 5; i <= n; i *= 5) {
		f += n / i;
	}

	two[flag] = t;
	five[flag] = f;
}


int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);

	divide(n, 0);
	divide(m, 1);
	divide(n - m, 2);

	printf("%lld\n", MIN(two[0] - two[1] - two[2], five[0] - five[1] - five[2]));
	return 0;
}