#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool checkBalance(string s){
    stack<char> a;
    for(auto i:s){
        if(i=='('){
            a.push('(');
        } else if(i==')'){
            if(a.top()=='(') {
                a.push(')');
                // return true;
            }
            else {
                return false;
            }
        }
    }

    if(a.top()==')') return true;
    else return false;

}


// bool OptimizedBalancedParanthesis(string s){
//     stack<char>
// }

int main(int argc, char const *argv[])
{
    cout<<checkBalance("(()))");
    return 0;
}
