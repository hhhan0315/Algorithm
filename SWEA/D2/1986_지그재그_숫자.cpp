#include <iostream>
using namespace std;

int main()
{
	int T, num, sum;
	cin >> T;
	
	for (int tc = 0; tc < T; tc++)
	{
		cin >> num;
		sum = 0;
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 == 0)
				sum -= i;
			else
				sum += i;
		}
		cout << "#" << tc + 1 << " " << sum << endl;
	}

	return 0;
}