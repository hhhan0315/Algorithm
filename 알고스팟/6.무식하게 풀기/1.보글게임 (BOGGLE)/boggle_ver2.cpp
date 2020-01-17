#include <iostream>
#include <string>
using namespace std;
/*
6장을 읽고 완전탐색으로 생각해서 풀었으며 substr의 기능을 알았다. 또한 기저 사례 파악이 중요하다고 깨달았다.
이 경우는 배열 [0][0]~[4][4]를 모두 하나씩 넣어보면서 확인하는 조건이라 사이트에서는 시간초과 오류 발생
*/

char word[5][5];
//상하좌우, 대각선 이동
int dx[8]= {-1,1,0,0,-1,1,-1,1};
int dy[8]= {0,0,1,-1,1,1,-1,-1};

bool inRange(int y, int x){
    if(0<=y&&y<5&&0<=x&&x<5)
        return true;
    else
        return false;
}

bool hasWord(int y, int x, string str)
{
    //1. 시작 위치가 범위 밖이면 실패
    if(!inRange(y,x))
        return false;
    //2. 첫 글자가 일치하지 않으면 실패
    if(word[y][x]!=str[0])
        return false;
    //3. 단어길이가 1인 경우 성공
    if(str.size()==1)
        return true;
    //위에서 다른경우는 false이고 이후 사이즈가 1개면 맞다는 조건이니 true

    for(int direction=0; direction<8; direction++)
    {
        int nextY = y+dy[direction];
        int nextX = x+dx[direction];

        if(hasWord(nextY,nextX,str.substr(1)))
            return true;
        //substr(1) : 하나를 잘라내고 나머지는 놔둔다.
    }
    return false;
}

int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin>>word[i][j];
            }
        }
        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            string str;
            cin>>str;
            bool check;
            for(int i=0; i<5; i++)
            {
                for(int j=0; j<5; j++)
                {
                    check=hasWord(i,j,str);
                    if(check==true)
                    {
                        break;
                    }
                }
                if(check==true)
                    break;
                //이중 for문 탈출을 위해 break다 괄호 밖에도 존재
            }
            if(check)
            {
                cout<<str<<' '<<"YES"<<"\n";
            }
            else
            {
                cout<<str<<' '<<"NO"<<"\n";
            }
        }
    }


    return 0;
}
