#include<iostream>
#include<vector>
#define ll long long
using namespace std;

void returnNumber(ll int input){
    // sieve creation
    vector<ll int> a;
    vector<ll int> b;
    // cout<<input<<endl;
    if(input==1){
        cout<<2;
        return;
    }
    a.reserve(input*input);
    // cout<<input<<"SJ1\n";
    for(ll int i=0; i < (input*input); i++ ){
        a.push_back(1);
    }
    a[0] = a[1] = 0;
    // cout<<"Hello World";
    // cout<<input<<"SJ2\n";
    for(ll int j=1; j<(input*input); j++){
        if(a[j]==1){
            for(ll int k = j; k*j<(input*input); k++){
                a[k*j] = 0;
            }
        }
    }
    // cout<<input<<"SJ3\n";

    for(ll int i=0; i<a.size(); i++){
        if(a[i]==1){
            // cout<<input<<endl;
            // cout<<i<<" ";
            b.push_back(i);
        }
    }
    //  cout<<input;
    // cout<<input<<"SJ4\n";
   
    
    // cout<<b.size();
    cout<<b[input-1];
    // return 0;
}


int main(int argc, char const *argv[])
{
    ll int t;
    cin>>t;
    returnNumber(t);
    return 0;
}
