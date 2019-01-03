#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    set<int> b;
    int a;
    cin>>a;
    while(a){
        cin>>a;
        b.insert(a);

        if(a==-1){
            int med = b.size()/2;
            cout<<b[med];
            
        }


    }
    return 0;
}
