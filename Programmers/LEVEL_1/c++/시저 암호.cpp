#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            answer += s[i];
        else
        {
            int start = (s[i] >= 'a') ? 'a' : 'A';
            answer += start + (s[i] - start + n) % 26;
        }
    }

    // for(int i=0; i<s.size(); i++)
    // {
    //     char ch=s[i];
    //     if('A'<=ch&&ch<='Z')
    //     {
    //         if(ch+n>'Z')
    //         {
    //             char temp = ch + n - 'Z';
    //             temp += 64;
    //             answer+=temp;
    //         }
    //         else
    //         {
    //             answer += (ch+n);
    //         }
    //     }
    //     else if('a'<=ch&&ch<='z')
    //     {
    //         if(ch+n>'z')
    //         {
    //             char temp = ch + n - 'z';
    //             temp +=96;
    //             answer+=temp;
    //         }
    //         else
    //         {
    //             answer+= (ch+n);
    //         }
    //     }
    //     else if(ch==' ')
    //     {
    //         answer+=ch;
    //     }
    // }
    return answer;
}