#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int minSteps(int n, int*dp){
    // Base Case
    if(n==1){
        return 0;
        // return minSteps;
    }
    if(dp[n]!=0){
        return dp[n];
    }

    // Rec Case
    int x=INT_MAX,y=INT_MAX;
    if(n%3==0){
        x = minSteps(n/3,dp);
    }
    if(n%2==0){
        y = minSteps(n/2,dp);
    }
    int z = minSteps(n-1,dp);

    int ans = min(min(x,y),z) + 1;
    return dp[n] = ans;
    
}

int minStepDP(int n){

}

int main(int argc, char const *argv[])
{
    int dp[100000] = {0};
    cout<<minSteps(6,dp)<<" ";
    
    return 0;
}
