#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    stack<int> s;

    for (int i = 0; i < arrangement.size(); i++)
    {
        char ch = arrangement[i];
        char ch2 = arrangement[i - 1];
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            s.pop();
            if (ch2 == '(')
            {
                answer += s.size();
            }
            else if (ch2 == ')')
            {
                answer += 1;
            }
        }
    }

    return answer;
}