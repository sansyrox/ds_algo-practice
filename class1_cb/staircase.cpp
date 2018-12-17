#include<iostream>

using namespace std;

// int count = 0;

// int staircase(int n, int k){
    
//     if(n<=0) { ::count+=0;}
//     if(n==0) {::count++; return ::count;}
//     for(int i=1; i<k and k<n ; i++){
//         staircase(n-i,k);
//     }
// }


// int staircase(int n, int k){
//     if(n==0){ ::count++;}
// }

int ways(int n, int k) {
    if(n==0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=ways(n-i ,k);
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    cout<<ways(10,3);
    return 0;
}
