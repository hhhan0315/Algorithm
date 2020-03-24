#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_size = 0;
    int y_size = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p' || s[i] == 'P')
            p_size++;
        if (s[i] == 'y' || s[i] == 'Y')
            y_size++;
    }
    if (p_size != y_size) answer = false;

    return answer;
}