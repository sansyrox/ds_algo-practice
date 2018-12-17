#include<iostream>
using namespace std;
#include<set>
#include<cstring>

void subsequences(char *in, char *out, int i, int j, set<string> &s){
    //Base Case
    if(in[i]=='\0'){
        out[j] = '\0';
        // cout<<out<<endl;
        string temp(out);
        s.insert(temp);
        return;
    }

    // Rec Case
    out[j] = in[i];
    subsequences(in,out,i+1,j+1,s);
    subsequences(in,out,i+1,j,s);
}

int main(int argc, char const *argv[])
{
    char a[100];
    cin>>a;
    char out[100];
    set<string> s;
    subsequences(a,out,0,0,s);
    for(auto k:s) cout<<k<<endl;
    return 0;
}
