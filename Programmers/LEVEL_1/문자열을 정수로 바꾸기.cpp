#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    if (s[0] == '-')
    {
        int size = s.size() - 2;
        for (int i = 1; i < s.size(); i++)
        {
            answer -= (s[i] - '0') * pow(10, size);
            size--;
        }
    }
    else if (s[0] == '+')
    {
        int size = s.size() - 2;
        for (int i = 1; i < s.size(); i++)
        {
            answer += (s[i] - '0') * pow(10, size);
            size--;
        }
    }
    else
    {
        int size = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            answer += (s[i] - '0') * pow(10, size);
            size--;
        }
    }

    return answer;
}