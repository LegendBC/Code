#include <stdio.h>

int main()
{
    int A,B;
    int ans = 0;
    int ansA = 0;
    while(scanf("%d %d",&A,&B) != EOF)
    {
       while(B != 0)
       {
           if( B%2 == 1)
           {
               ansA *= A;
               ansA %= 1000;
               B-=1;
           }
           B /=2;
           A*=A;
           A%=1000;

       }
       printf("%d\n",ansA);

    }
    return 0;
}