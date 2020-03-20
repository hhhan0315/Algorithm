#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >> W;

		int A_sum = 0;
		int B_sum = 0;
		A_sum = P * W;
		if (W > R)
			B_sum = Q + ((W - R) * S);
		else
			B_sum = Q;

		cout << "#" << tc << " " << min(A_sum, B_sum) << endl;
	}

	return 0;
}