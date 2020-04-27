#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int size = prices.size();
    vector<int> answer(size);
    stack<int> s;

    for (int i = 0; i < size; i++)
    {
        while (!s.empty() && prices[s.top()] > prices[i])
        {
            answer[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    // ex) answer[2]=1, answer[4]=0

    while (!s.empty())
    {
        answer[s.top()] = size - s.top() - 1;
        s.pop();
    }
    // ex) answer[3]=1, answer[1]=3, answer[0]=4 순서로 진행

    return answer;
}
// stack으로도 완성할 수 있는게 신기했다. 시간 차이가 발생함.

//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//    vector<int> answer;
//
//    for (int i = 0; i < prices.size(); i++)
//    {
//        int cnt = 0;
//        for (int j = i + 1; j < prices.size(); j++)
//        {
//            cnt++;
//
//            if (prices[i] > prices[j]) break;
//        }
//        answer.push_back(cnt);
//    }
//
//    return answer;
//}