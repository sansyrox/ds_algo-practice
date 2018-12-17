#include<iostream>
using namespace std;

void returnNumber(char digits[][10], int n){
    if(n==0) {
        return;
    }
    int d = n%10;
    returnNumber(digits,n/10);
    cout<<digits[d];
}

int main(int argc, char const *argv[])
{
    char digits[][10]= {
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
    returnNumber(digits,123);
    return 0;
}
