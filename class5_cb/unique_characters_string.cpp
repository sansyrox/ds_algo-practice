#include<iostream>
#include<string>
#include<map>

using namespace std;

void returnUniqueArray(map<char,int> &m, string s){
    for(auto i:s){
        if(m[i]){
            m[i] = m[i]+1;
        }
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
