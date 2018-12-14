#include<iostream>

using namespace std;

int fibonacci(int n){
    // returning the nth term
    if(n==0 or n==1){
        return n;
    }
    int term = fibonacci(n-1) + fibonacci(n-2);
    return term;
}

int main(int argc, char const *argv[])
{
    cout<<fibonacci(4);
    return 0;
}
