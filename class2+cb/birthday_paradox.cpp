#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cnt=0;

    float p = 1;

    float threshold = 0.5;
    
    int num=365;
    float denom = 365.0;
    float ans = 1;

    while(ans>= 1-threshold){
    
        ans*=((num)/denom);
        num--;
        cnt++;
    }

    cout<<cnt;

    return 0;
}
