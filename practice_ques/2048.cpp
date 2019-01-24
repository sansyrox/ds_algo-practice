#include<iostream>
using namespace std;

char a[][10] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};

void print2048(int n){
    if(n==0){
        return ;
    }
    // rec case
    int x = n%10;
    print2048(n/10);
    cout<<a[x]<<" ";
    
}

int main(int argc, char const *argv[])
{
    print2048(2048);
    return 0;
}
