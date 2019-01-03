#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string,int> m;
    m.insert(pair<string, int>("2", 30)); 
    m.insert(pair<string, int>("3", 40)); 
    m.insert(pair<string, int>("3", 50));
    m["3"] = 60;
    cout<<m["3"];
    // for(auto i:m[2])
    //     cout<<i;

    return 0;
}
