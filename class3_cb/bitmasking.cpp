#include<iostream>
using namespace std;
int getLastBit(int n){
    return(n&1);
}
int getIthBit(int n, int p){
    return (n&(1<<p))>0?1:0;
}

int setIthBit(int &n,int p){
    return n = (n|(1<<p));
}

int cntBits(int n){
    int cnt =0;
    while(n>0){
        cnt+=(n&1);
        n=n>>1;
    }
    return cnt;
}

int cntBits2(int n){
    int cnt=0;
    while(n){
        cnt++;
        n= n&(n-1);
    }
    return cnt;
}

int cntBits3(int n){
    int cnt=0;
    while(n){
        int p = n&(-n);
        n = n - p;
        cnt++;
    }
}

int main(int argc, char const *argv[])
{
    //&,|,~,<<,>>
    int n;
    cin>>n;
    cout<<"last bit"<<getLastBit(n)<<endl;

    cout<<"third last bit"<<getIthBit(n,3)<<endl;

    cout<<"set ith bit"<<setIthBit(n,3)<<endl;
    // __builtin_popcount(n) to find the sum of bits
    return 0;
}
