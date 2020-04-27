#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int DIV = 1234567;
    vector<int> fibo(n + 1);
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
        fibo[i] %= DIV;
    }
    answer = fibo[n];
    return answer;
}