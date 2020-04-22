#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<double, int>& a, pair<double, int>& b)
{
    // 같을 경우에는 작은 번호의 스테이지가 먼저
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int> > percent;
    double arr[502] = { 0 };

    for (int i = 0; i < stages.size(); i++)
    {
        arr[stages[i]]++;
    }

    int size = stages.size();
    for (int i = 1; i <= N; i++)
    {
        // 0일때 0/1, 0/0 을 넣었을 때 실패 발생
        // 0일때의 조건을 따로 작성
        if (arr[i] == 0)
        {
            percent.push_back(make_pair(0, i));
        }
        else
        {
            percent.push_back(make_pair(arr[i] / size, i));
            size -= arr[i];
        }
    }

    sort(percent.begin(), percent.end(), compare);

    for (int i = 0; i < percent.size(); i++)
    {
        answer.push_back(percent[i].second);
    }

    return answer;
}