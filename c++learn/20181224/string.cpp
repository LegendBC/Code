#include <iostream>
using namespace std;

class lbc_string{
    public:
        string lbc_getstring(void){
            return string;
        }


    

    private:
        string string="ABCDEFG";
        //string string(10,'A');

};

//class lbc_childstring:


int main(){
    ios::sync_with_stdio(false);
    lbc_string lbc;
    cout << lbc.lbc_getstring();
    return 0;
}