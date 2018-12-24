#include<bits/stdc++.h>
using namespace std;

void stackReverser(stack<int>& a){
    stack<int> b;
    while(a.top()){
        b.push(a.top());
        a.pop();
    }

    while(b.top()){
        a.push(b.top());
        a.pop();
    }

}

int main(int argc, char const *argv[])
{
    
    
    return 0;
}
