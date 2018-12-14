#include<iostream>
using namespace std;

int power(int a, int n){
    if(n<=0) return 1;
    int output = a*power(a,n-1);
    return output;
}

int optimizedPower(int a, int n){
    if(n<=0) return 1;
    int smallPower = optimizedPower(a,n/2);
    int final_answer = smallPower * smallPower;

    if (n%2==0) return final_answer;
    else return a*final_answer;

}

int main(int argc, char const *argv[])
{
    cout<<power(4,5)<<endl;
    cout<<optimizedPower(4,5)<<endl;
    return 0;
}
