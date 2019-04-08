//闰年的规则
#include <stdio.h>
#define ISYEAP(x) x%100!=0 && x%4==0 || x%400 ==0?1:0

int dayofmonth[13][2]={
    0,0,
    31,31,
    28,29,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
};

struct date{
    int year;
    int month;
    int day;
    void nextday(){
        day++;
        if(day > dayofmonth[month][ISYEAP(year)]){
            day =1;
            month++;
            if(month >12)
            {
                month = 1;
                year++;
            }
        }
    }
};

int main()
{
    date s1;
    date s2;
    date tmp;
    int cnt=0;
    tmp.day = 1;
    tmp.month = 1;
    tmp.year = 0;
    while(scanf("%4d%2d%2d",&(s1.year),&(s1.month),&(s1.day)) != EOF)
    {
        scanf("%4d%2d%2d",&(s2.year),&(s2.month),&(s2.day));
        int counts2 = s2.year * 10000 + s2.month*100 + s2.day;
        int counts1 = s1.year * 10000 + s1.month*100 + s1.day;
        if(counts2 <= counts1){
            tmp.year = s2.year;
            tmp.month = s2.month;
            tmp.day = s2.day;
            while(tmp.year != s1.year || tmp.month != s1.month || tmp.day !=s1.day)
            {
                cnt++;
                tmp.nextday();
            }
            cnt++;
            printf("%d\n",cnt);
        }else{
            tmp.year = s1.year;
            tmp.month = s1.month;
            tmp.day = s1.day;
            while(tmp.year != s2.year || tmp.month != s2.month || tmp.day !=s2.day)
            {
                cnt++;
                tmp.nextday();
            }
            cnt++;
            printf("%d\n",cnt);
        }
        tmp.day = 1;
        tmp.month = 1;
        tmp.year = 0;
        cnt = 0;
    }
    return 0;
}