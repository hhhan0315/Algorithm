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
			temp = ""; //������ �ٽ� ����ֱ�
			if (s[i] == '-')
				check = true;
		}
		else
			temp += s[i];
	}
	cout << result;
	return 0;
}
//atoi : char�� -> ������
//stoi : string�� -> ������
//s[i] == NULL�� 55-50+40 �Ŀ��� ������ 40�� temp�� �ְ� ������� �� 40�� ������ֱ� ����