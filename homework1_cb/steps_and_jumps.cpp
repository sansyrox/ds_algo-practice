#include<iostream>
using namespace std;

int returnWays(int n, int k) {
    if(n==0) return 1;
    if(n<0) return 0;
    int ways=0;
    for(int i=1; i<=k; i++){
        ways+=returnWays(n-i,k);
    }
    return ways;
}

// now snakes
int returnWithSnakes(int n, int k, int s){
    if(n==0) return 1;
    if(n<0) return 0;
    int waysWithoutSnakes=0;
    for(int i=1; i<=k; i++){
        if(i!=s) {
            waysWithoutSnakes+=returnWithSnakes(n-i,k,s);
            }
    }
    return waysWithoutSnakes;
}

int crazyRecursionWithSnakes(int n, int k, int s, int i=0){
    if(n==0) return 1;
    if(n<0) return 0;
    int waysWithoutSnakes=0;
    if(i<k){
        if(i!=s) waysWithoutSnakes+=crazyRecursionWithSnakes(n-i,k,s,i+1);
    }
    return waysWithoutSnakes;
}

int main(int argc, char const *argv[])
{
    cout<<returnWithSnakes(4,2,0);
    cout<<endl<<returnWithSnakes(4,2,0);
    return 0;
}
