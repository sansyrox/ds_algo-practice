#include<iostream>
using namespace std;
#include<string>

void brackets(int n,string s,int open,int close,char indication=0){ // n = 2*n-1
    //Base Case
    s[0]='{';
    if(n==0){
        // cout<<"TMKC";
        s+='}';
        cout<<s<<endl;
        return;
    }
    if(indication=='{'){
        s+='{';
    }else if(indication=='}'){
        s+='}';
    }

    //Rec Case
    if(open>0) brackets(n-1,s,open-1,close,'{');
    if(open<close) brackets(n-1,s,open,close-1,'}'); // why not <=
    
}


int main(int argc, char const *argv[])
{
    string s;
    // int n = 2;
    
    brackets(6,s,3,3);
    return 0;
}
