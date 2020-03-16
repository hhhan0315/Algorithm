#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	string str;
	bool flag;
	cin >> T;
	for (int tc = 0; tc < T; tc++)
	{
		cin >> str;
		flag = true;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != str[str.size() - (i + 1)])
				flag = false;
		}

		if (flag == true)
			cout << "#" << tc + 1 << " 1" << endl;
		else
			cout << "#" << tc + 1 << " 0" << endl;
	}

	return 0;
}