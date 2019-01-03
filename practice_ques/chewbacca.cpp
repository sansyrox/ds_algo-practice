#include<iostream>
#include<string>
using namespace std;

void invert(string s){
    for(int i=0; i<s.length(); i++){
        if(i==0 and (s[i]-'0')==9){
            continue;
        }
        if((s[i]-'0')>=5){
            // cout<<s[i]-'0'<<" ";
            int digit = 9 - (s[i]-'0');
            s[i] = digit + '0';
        }
    }
    cout<<s;
}

int main(int argc, char const *argv[])
{
    /* code */
    string s;
    cin>>s;
    invert(s);
    return 0;
}
