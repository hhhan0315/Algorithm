#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string temp = "";
	int result = 0;
	bool check = false;

	for (int i = 0; i <= s.size(); i++)
	{
		if (s[i] == '+' || s[i] == '-' || s[i] == NULL)
		{
			if (check == true)
			{
				result -= stoi(temp);
			}
			else
			{
				result += stoi(temp);
			}
			temp = ""; //넣으면 다시 비워주기
			if (s[i] == '-')
				check = true;
		}
		else
			temp += s[i];
	}
	cout << result;
	return 0;
}
//atoi : char형 -> 정수형
//stoi : string형 -> 정수형
//s[i] == NULL은 55-50+40 식에서 마지막 40을 temp에 넣고 비어있을 때 40도 계산해주기 위함