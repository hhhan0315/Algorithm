#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> eratos(n + 1, false);
    for (int i = 2; i <= n; i++)
    {
        if (eratos[i] == false)
            answer++;
        for (int j = i; j <= n; j += i)
            eratos[j] = true;
    }
    return answer;
}