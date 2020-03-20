#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		int input;
		cin >> input;
		int visited[101] = { 0 };

		int num;
		for (int i = 0; i < 1000; i++)
		{
			cin >> num;
			visited[num]++;
		}

		int res = 0;
		int res_num = 0;
		for (int i = 0; i < 101; i++)
		{
			if (visited[i] >= res)
			{
				res = visited[i];
				res_num = i;
			}
		}

		cout << "#" << input << " " << res_num << endl;
	}

	return 0;
}