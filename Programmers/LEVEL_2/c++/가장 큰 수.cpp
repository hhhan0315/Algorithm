#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    return a + b > b + a; // 핵심
}

// string으로 합치고 비교
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    for (auto num : numbers)
    {
        temp.push_back(to_string(num));
    }
    sort(temp.begin(), temp.end(), compare);

    if (temp.at(0) == "0") return "0"; // [0, 0, 0] 일 때 000 나오는 것 방지 

    for (auto num : temp)
    {
        answer += num;
    }

    return answer;
}