#include<iostream>
using namespace std;

int numOfWays(int n) {
    if(n<=0) return 0;
    else if(n<4) return 1;
    else if(n==4) return 2;
    else return numOfWays(n-3) + numOfWays(n-4);
}

int main(int argc, char const *argv[])
{
    cout<<numOfWays(5);
    return 0;
}
