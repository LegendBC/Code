#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

struct student{
    int score;
    char name[100];
    int age;
    bool operator < (student &c) const{
        if (score != c.score)
            return score < c.score;
        if(strcmp(name,c.name) !=0)
            return strcmp(name,c.name) < 0;
        if(age != c.age)
            return age > c.age;
    }
}buf[1000];

int main(){
    int n;
    while(scanf("%d",&n) !=EOF)
    {
        for(int i = 0; i < n; ++i){
            scanf("%s %d %d",buf[i].name, &(buf[i].age), &(buf[i].score));
        }
        std::sort(buf,buf+n);
        for(int i = 0; i < n; ++i){
            printf("%s %d %d\n",buf[i].name, buf[i].age, buf[i].score);
        }
    }
    return 0;
}
