#include<bits/stdc++.h>

using namespace std;

string differenceInS(string s){
    int n = s.length();
    string copy="";
    copy+=s[0];
    for(int i=0; i<n-1; i++){
        int x = int(char(s[i+1])) - int(char(s[i]));
        // cout<<x<<endl;
        copy+=to_string(x)+s[i+1];
    }
    // cout<<copy;
    return copy;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;

    string copy = differenceInS(s);
    cout<<copy;
    return 0;
}
