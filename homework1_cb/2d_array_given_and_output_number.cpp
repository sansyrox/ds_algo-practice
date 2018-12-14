#include<iostream>
using namespace std;

void returnNumber(char digits[][10],int n){
    int d = n%10;
    if (n>0){
        returnNumber(digits, n/10);
        cout<<digits[d]<<" ";
        }
    return;
}

int main(int argc, char const *argv[])
{
    char digits[][10] = {
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
