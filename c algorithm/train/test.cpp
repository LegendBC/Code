/*
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    char s[] = "ab:d : ef;gh :i-jkl;mnop;qrs-tu: vwx-y;z";
    char *delim = ":";
    char *p;
    printf("%s ", strtok(s, delim));
    while((p = strtok(NULL, delim)))
    {   
        printf("\n");
        printf("%s ", p);
        printf("\n");
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
void test(float &x){
    x = 1000;
}
int main(){
    float nKByte = 100.0;
    test(nKByte);
    cout << nKByte << " megabytes" << endl;
}