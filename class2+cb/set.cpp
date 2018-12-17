#include<iostream>
#include<set>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(3);


    for(int element:s) cout<<element<<" ";
    return 0;
}
