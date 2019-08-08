#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check(string str) {
	stack<char> s;
	int len = (int)str.length();

	for (int i = 0; i < len; i++)
	{
		//string을 배열로 바로 사용도 가능하다
		char c = str[i];
		if (c == '(')
			s.push(c);
		else
		{
			if (!s.empty())
				s.pop();
			else
				return false;
		}
	}
	return s.empty();
	//비어있으면 true 아니면 false 호출
}


int main() {
	int n;
	cin >> n;

	for (int i = 0; i<n; i++)
	{
		string str;
		cin >> str;

		if (check(str))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}