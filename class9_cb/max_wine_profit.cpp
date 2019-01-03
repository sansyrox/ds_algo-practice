#include<iostream>
#include<vector>
using namespace std;

int dp[100][100] = {0};
// Recursion
int wines(int *a, int i, int j, int y){
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    int op1 = a[i]*y + wines(a, i+1,j, y+1);
    int op2 = a[j]*y + wines(a,i,j-1,y+1);
    return max(op1,op2);
}

// Bottom Up ke liye for loop diagonal

int main(int argc, char const *argv[])
{
    int a[] = {2,1,3};
    cout<<wines(a,0,2,1)<<endl;

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
