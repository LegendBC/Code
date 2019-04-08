#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int num[200];
    int n;
    int dst;
    int base = 0;
    int top = 0;
    int mid = 0;
    while(scanf("%d",&n) != EOF)
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d",&num[i]);
        }
        scanf("%d",&dst);
        sort(num,num+n);
        top = n-1;
        base = 0;
        bool flag = false;
        while(top >= base)
        {
            mid = (top + base)/2;
            if( dst == num[mid])
            {
                flag = true;
                printf("%d\n",mid+1);
                break;
            }else if(dst > num[mid]){
                base = mid + 1;
            }else if(dst < num[mid]){
                top = mid -1;
            }
        }
        if(flag == false)
            printf("-1\n");
        top = 0;
        base = 0;
        mid = 0;

    }
}