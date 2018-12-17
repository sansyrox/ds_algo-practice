#include<iostream>
using namespace std;

void subsequence(char *in, char *out, int i, int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    out[j] = in[i];

    subsequence(in,out,i+1,j+1);
    subsequence(in,out,i+1,j);
    
}

int main(int argc, char const *argv[])
{
    char b[] = "abc";
    char a[100];
    subsequence(b,a,0,0);
    return 0;
}
