#include<iostream>
using namespace std;

int l[30]={0},r[30]={0},c[30]={0};

int cntNqueen(int n, int i){
    if(i==n) return 1;

    // Try to Place Queen at every position in ith row
    int cnt=0;
    for(int j=0; j<n; j++){
        if(!c[j] and !l[i-j+n-1] and !r[i+j]){
            c[j] = l[i-j+n-1] = r[i+j] = 1;
            cnt+=cntNqueen(n,i+1);
            c[j] = l[i-j+n-1] = r[i+j] = 0;

        }
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
    cout<<cntNqueen(n,0);
    return 0;
}
