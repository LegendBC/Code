#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;

char s[110];
char ans[110];
char tmp[110];

bool judge(const char exp[], int& lo, int& hi)
{
    if(lo > hi)
        
}

int main()
{
    bool flag;
    int index = 0;
    while(scanf("%s",s) != EOF)
    {
        for(int i = 0; i < strlen(s); ++i)
        {
            int index = 0;
            switch(s[i])
            {
                case '(':
                case ')':
                tmp[index] = s[i];
                ++index;
                break;
                default:
                break;
            }
        }
        int lo = 0;
        int hi = index-1;
        flag = judge(tmp,lo,hi);

    }

    return 0;
}