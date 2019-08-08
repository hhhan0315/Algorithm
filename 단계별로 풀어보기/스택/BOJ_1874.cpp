#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<char> v;
	stack<int> s;
	vector<int> p;

	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		p.push_back(k);
	}

	vector<int>::iterator it;
	it = p.begin();
	for (int i = 1; i <= n; i++)
	{
		s.push(i);
		v.push_back('+');
		while (!s.empty())
		{
			if (*it != s.top()) break;
			else
			{
				s.pop();
				v.push_back('-');
				it++;
			}
		}
	}

	if (s.empty())
	{
		for (int i = 0; i<v.size(); i++)
			cout << v[i] << "\n";
	}
	else
		cout << "NO";

	return 0;
}
//*it *을붙여야 int 형과 성립이 된다.