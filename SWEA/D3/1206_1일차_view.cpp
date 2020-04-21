#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int test_case, T = 10;
	int length;
	vector<int> v(1000);
	int position[4] = { -2,-1,1,2 };

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		cin >> length;
		for (int i = 0; i < length; i++)
		{
			cin >> v[i];
		}

		int res = 0;
		for (int i = 0; i < length; i++)
		{
			int now = v[i];
			int temp = 0;
			for (int j = 0; j < 4; j++)
			{
				int pos = i + position[j];
				if (pos >= 0 && pos < length)
				{
					int check = v[pos];

					if (check > now)
					{
						temp = 0;
						now = 0;
						break;
					}
					else
					{
						if (check > temp)
							temp = check;
					}
				}
				else
					continue;
			}
			res += (now - temp);
		}
		cout << "#" << test_case << " " << res << endl;
	}

	return 0;
}