#include<iostream>
#include<vector>
using namespace std;



int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> pi;
    pi.push_back(-1);
    // vector<int> output;
    // output.reserve(200);
    // output={0} ;
    // cout<<"TMKC\n";
    int output[201] = {0};
    output[0]=-1;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        pi[i]=temp;
    }
    // cout<<"TMKC\n";

    for(int i=1; i<=n; i++){
        // cout<<pi[i]<<" ";
        output[pi[i]] = i;
    }
    int length_output = sizeof(output)/sizeof(int);
    int i=0;
    for(i=1; i<length_output-1 and output[i+1]!=0 ; i++){
        if(i>0){
            cout<<output[i]<<" ";
        }
    }

    cout<<output[i];

    return 0;
}
