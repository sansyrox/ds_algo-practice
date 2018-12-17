#include<iostream>
using namespace std;

bool isSorted(int *a, int n) {
    if(n==1){
        return true;
    }

    // recursive case
    if(a[0]<a[1] and isSorted(a+1,n-1)){
        return true;
    } return false;
}


int main(int argc, char const *argv[])
{
    int a[] = {1,2,34,5};
    if(isSorted(a,5)){
        cout<<"Yes";
    } else cout<<"No";
    
    return 0;
}
