#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int N, num;
vector<int> v;
int max_sum = 0, sum;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	do {
		sum = 0;
		for (int i = 0; i < N-1; i++) {	
			int temp = abs(v[i] - v[i + 1]);
			sum += temp;
		}
		if (sum > max_sum)
			max_sum = sum;

	} while (next_permutation(v.begin(), v.end()));

	cout << max_sum;
	return 0;
}
//abs : 절대값 <cstdlib>
//next_permutation : 다음 순열 구함 <algorithm>