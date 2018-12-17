#include<iostream>
using namespace std;

int getIthBit(int n, int p=0){
    while(1){
        if (int((n&(1<<p))>0?1:0) != 1)
            p++;
        if (int((n&(1<<p))>0?1:0) == 1) return p;
    }
    return 

}

void check(int *a, int n){
    int all_xor = a[0];
    for(int i=1; i<n; i++){
        all_xor = all_xor ^ a[i];
    }
    cout<<all_xor;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,3,5,2,3,1,5,7};
    int n = sizeof(a)/sizeof(int);
    check(a,n);
    return 0;
}
