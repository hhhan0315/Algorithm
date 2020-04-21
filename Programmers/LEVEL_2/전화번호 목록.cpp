#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end()); // sort()를 생각하지 못했다.

    for (int i = 0; i < phone_book.size() - 1; i++)
    {
        // string str1=phone_book[i];
        // string str2=phone_book[i+1];
        // for(int j=0; j<str2.size(); j++)
        // {
        //     string temp=str2.substr(0+j, str1.size());
        //     if(str1==temp)
        //     {
        //         answer=false;
        //         break;
        //     }
        // }
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))
        {
            answer = false;
            break;
        }
    }

    return answer;
}