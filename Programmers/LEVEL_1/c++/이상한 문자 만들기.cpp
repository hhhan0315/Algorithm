#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == ' ')
        {
            answer += ch;
            index = 0;
        }
        else
        {
            if (index % 2 == 0)
            {
                if ('a' <= ch && ch <= 'z')
                {
                    ch -= 32;
                }
                answer += ch;
            }
            else
            {
                if ('A' <= ch && ch <= 'Z')
                {
                    ch += 32;
                }
                answer += ch;
            }
            index++;
        }
    }
    return answer;
}