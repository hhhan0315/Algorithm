#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(char a, char b)
{
    return a > b;
}

string solution(string s) {
    string answer = "";
    vector<char> temp;

    for (int i = 0; i < s.length(); i++)
    {
        temp.push_back(s.at(i));
    }
    sort(temp.begin(), temp.end(), compare);

    for (int i = 0; i < temp.size(); i++)
    {
        answer.push_back(temp[i]);
    }

    // string answer = s;
    // sort(answer.begin(),answer.end(),greater<char>());
    // ���������� ǥ���ϱ� ���� greater ����ϱ⵵ �Ѵ�.

    return answer;
}