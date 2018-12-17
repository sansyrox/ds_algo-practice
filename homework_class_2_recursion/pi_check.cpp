#include<iostream>
#include<vector>
#include<string>
using namespace std;

void piCheck(char *in, string out, int i){
    if(in[i]=='\0') {
        cout<<out;
        return;
    }
    if(in[i]=='p') {// possible and
        i++;
        // cout<<i;
        // cout<<in[i]<<" ";
        out.push_back('3');
        out.push_back('.');
        out.push_back('1');
        out.push_back('4');
        // cout<<out;
    }
    out.push_back(in[i]);
    piCheck(in,out,i+1);


}

int main(int argc, char const *argv[])
{
    char in[] = "xypx";
    string out;
    piCheck(in,out,0);
    // cout<<in;
    return 0;
}
