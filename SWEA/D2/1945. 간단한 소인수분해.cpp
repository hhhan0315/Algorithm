#include <iostream>
using namespace std;

int main(void)
{
	int T, N;
	cin >> T;
	int div[5] = { 2,3,5,7,11 };
	int res[5];

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		for (int i = 0; i < 5; i++)
			res[i] = 0;

		int index = 0;
		while (true)
		{
			if (N % div[index] == 0)
			{
				res[index]++;
				N /= div[index];
			}
			else
				index++;

			if (N == 1) break;
		}

		cout << "#" << tc<< " ";
		for (int i = 0; i < 5; i++)
			cout << res[i] << " ";
		cout << endl;
	}

	return 0;
}