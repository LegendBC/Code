#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int buf[100];
    int n;
    while(scanf("%d",&n) != EOF)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &buf[i]);
        }
        sort(buf, buf+n);
        for(int i = 0; i < n; i++)
        {
            if( i == n-1)
            {
                printf("%d",buf[i]);
            }else{
                printf("%d ", buf[i]);
            }
            
            
        }
    }

    return 0;
}