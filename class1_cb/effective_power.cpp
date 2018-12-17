#include<iostream>
using namespace std;

int fastpower(int a, int n){

    if(n==0){
        return 1;
    }
    int smallpower = fastpower(a,n/2);
    smallpower *= smallpower;

    if (n%2==1){
        return a*smallpower;
    } else return smallpower;
}

int main(int argc, char const *argv[])
{
    cout<<fastpower(2,3);
    return 0;
}