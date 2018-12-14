#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=0) {
        return 1;
    }
    n = n * factorial(n-1);
    return n;
}

int main(int argc, char const *argv[])
{
    cout<<factorial(4);
    return 0;
}
