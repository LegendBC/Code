#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vector<int>::iterator v = vec.begin();

    for(int i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    cout << vec.size() << endl;
}