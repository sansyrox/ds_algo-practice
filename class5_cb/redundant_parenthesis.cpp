#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool noRedundantParenthesis(string s){
    stack<char> a;
    for(auto i:s){ // or i<str.length()
        if(i!=')'){
            a.push(i);
        }
        else{ // i==)
            if(a.top()!='('){
                while(a.top()=='('){
                    a.pop();
                }
                a.pop();
            } else return true; // redudant Paranthesis present
        }
    }
    return false; // not Present // or !s.empty()
}

int main(int argc, char const *argv[])
{
    cout<<noRedundantParenthesis("(a)");
    return 0;
}
