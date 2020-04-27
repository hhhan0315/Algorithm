#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string pos;

    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            pos = to_string(i);
            break;
        }
    }
    answer += "김서방은 ";
    answer += pos;
    answer += "에 있다";
    return answer;
}