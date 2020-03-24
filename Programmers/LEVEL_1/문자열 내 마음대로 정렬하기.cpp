#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> strings;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<char, int> > temp;

    sort(strings.begin(), strings.end());   // 초반에 정렬을 하고 시작

    for (int i = 0; i < strings.size(); i++)
    {
        temp.push_back(make_pair(strings[i].at(n), i));
    }
    sort(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        answer.push_back(strings[temp[i].second]);
    }

    return answer;
}

