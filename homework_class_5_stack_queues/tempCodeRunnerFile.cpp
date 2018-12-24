#include<bits/stdc++.h>
using namespace std;

void create_sieve(int n, stack<int>& sieve){
    vector<int> a;
    // cout<<"Debug\n";
    a.reserve(100);
    for(int i=0;i<=n;i++){
        a.push_back(1);
    }
    a[0] = 0;
    a[1] = 0;
    // cout<<"Debug\n";
    for(int i=2; i<=n; i++){
        if(a[i]==1){
            for(int j=2; i*j<=n;j++){
                a[i*j]=0;
            }
        }
    }
    // cout<<"Debug\n";
    stack<int> temp;
    for(int i=0; i<=n; i++){
        if(a[i]){
            temp.push(i);
        }
    }

    while(not temp.empty()){
        sieve.push(temp.top());
        temp.pop();
    }

}

void primeCheck(stack<int>& a0, stack<int>& b0, stack<int> seive, int q, int i=1 ){ // i-> iteration counter q->flag
    stack<int> temp;
    if(i>q){
        return;
    }

    int prime_number = seive.top();

    while(not a0.empty()){
        if((a0.top()%prime_number)==0){
            b0.push(a0.top());
            a0.pop();
        } else {
            temp.push(a0.top());
            a0.pop();
        }
    }
    seive.pop();

    a0.swap(temp);
    primeCheck(a0,b0,seive,q,i+1);

}

void printStack(stack<int> a){
    while(not a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }

}

int main(int argc, char const *argv[])
{
    /* code */
    stack<int> a0,b0;
    stack<int> seive;
    int n,q;
    cin>>n>>q;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        a0.push(temp);
    }
    create_sieve(n,seive);
    primeCheck(a0,b0,seive,q,1);
    // while(not seive.empty()){
    //     cout<<seive.top()<<" ";
    //     seive.pop();
    // }
    printStack(b0);
    printStack(a0);


    return 0;
}
