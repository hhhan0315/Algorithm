#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());

    // h회 이상이 h개인지 확인
    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] > answer) answer++;
        else break;
    }

    return answer;
}