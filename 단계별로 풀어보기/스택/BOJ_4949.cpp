#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check(string str) {
	stack<char> s;
	int len = (int)str.length();

	for (int i = 0; i<len; i++)
	{
		char c = str[i];
		if (c == '(')
			s.push(c);
		else if (c == '[')
			s.push(c);
		else if (c == ')')
		{
			if (!s.empty() && s.top() == '(')
				s.pop();
			else
			{
				return false;
			}
		}
		else if (c == ']')
		{
			if (!s.empty() && s.top() == '[')
				s.pop();
			else
			{
				return false;
			}
		}
	}
	return s.empty();
}

int main() {
	string str;
	while (1)
	{
		getline(cin, str);
		if (str == ".")
			break;

		if (check(str))
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
	return 0;
}
//�׳� str�� ������ ���⸦ �����ؼ� getline���� �޾ƾ��Ѵ�.