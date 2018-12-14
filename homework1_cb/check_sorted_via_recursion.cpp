#include<iostream>
using namespace std;

bool sort_function(int *arr, int n) {
    if(n==1) {
        return true;
    }
    if(arr[0]<arr[1] and sort_function(arr+1,n-1)) {
        return true;
    } 
    return false;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4};
    int n = sizeof(a)/sizeof(int);
    bool b = sort_function(a,n);

    if (b == true) cout<<"YES\n";
    else cout<<"False \n";
    return 0;
}
