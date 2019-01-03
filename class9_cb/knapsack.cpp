#include<iostream>
#include<map>
using namespace std;

// int KnapSack(map <int, int> m, int cap,int i){
//     // Base Case
//     if(cap<=0){
//         return 0;
//     }
//     // Rec Case
//     int op = 0;
//     for(auto i:m){
//         op1 = m[i] + KnapSack(m, );
//     }
// }

int dp[100][100] = {0};

int knapSack(int *p, int*wts, int c, int n){
    if(n==0 or c==0){
        return 0;
    }

    if(dp[n][c]!=0){
        return dp[n][c];
    }

    int ans = knapSack(p,wts,c,n-1);

    if(c-wts[n-1]>=0){
        ans = max(ans,knapSack(p,wts,c-wts[n-1],n-1) + p[n-1]);
    }
    return dp[n][c]=ans;
}

// Bottom UP

int main(int argc, char const *argv[])
{
    int prices[] = {10,15,5};
    int wts[] = {3,2,6};
    int n = 3;
    cout<<knapSack(prices,wts,4,n)<<endl;
    
    return 0;
}
