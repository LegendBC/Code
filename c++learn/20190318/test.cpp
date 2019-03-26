#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstring>

using namespace std;

class solution{
public:
    vector<int> in;
    int target;
    vector<int> out;
    void twosum(){
        unordered_map<int, int> m;
        for(int i = 0; i < in.size(); ++i){
            if(m.count(target-in[i])){
                out.push_back(i);
                out.push_back(m[target-in[i]]);
            }
            m[in[i]] = i;
        }


    }


};

int main(){
    solution lbc;
    //init
    cout << "please input numbers:";
    int temp;
    while(cin >> temp){
        lbc.in.push_back(temp);
    }
    cin.clear(); 
    cin.sync();
    cout << "please input the number you want to find:";
    
    cin >> lbc.target;
    lbc.twosum();
    vector<int>::iterator v = lbc.out.begin();
    while( v != lbc.out.end()) {
      cout << *v+1 << endl;
      v++;
   }
    return 0;
}