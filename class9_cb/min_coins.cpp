// Minimum Coins required
#include<iostream>
using namespace std;

int dp[1000] = {0};

int minCoins(int N, int *coins, int len_arr){
    // Base Case
    if(N==0){
        return 0;
    }
    if(dp[N]!=0){
        return dp[N];
    }

    // Rec Case
    int ans=INT_MAX;
    for(int i=0; i<len_arr; i++){
        if(coins[i]<=N){
            int subProblem = minCoins(N-coins[i], coins, len_arr);
            ans = min(ans+1,subProblem);
        }
    }
    return dp[N]=ans;
}

// Bottom Up main iterative approach
int minCoinsBottomUP(int n, int* coins, int m){
    int b[1000] = {0};
    b[0] = 0;

    for(int j=1; j<=n; j++){
        // Pick each type of coins
        int ans = INT_MAX;
        for(int i=0; i<m; i++){
        if(j>=coins[i]){
            int subProb = b[j-coins[i]];
            ans = min(subProb+1,ans);
            }
        }
        b[j] = ans;
    }
   
   return b[n];
}

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    int coins[] = {10,7,3};
    int len_arr = 3;

    // cout<<minCoins(N, coins, len_arr);
    cout<<minCoinsBottomUP(N,coins,len_arr);
    return 0;
}
