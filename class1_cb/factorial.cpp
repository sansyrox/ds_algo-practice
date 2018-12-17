#include<iostream>
using namespace std;

int fact(int n){
    // Base Case
    if(n==0){
        return 1;
    }
    // recursive case
    int ans = n*fact(n-1);
    return ans;
}

int main(int argc, char const *argv[])
{
    cout<<fact(5);
    return 0;
}
