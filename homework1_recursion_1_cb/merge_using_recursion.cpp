#include<iostream>
using namespace std;

void merge(int *a,int *b,int e[],int n1, int n2 ,int i=0){
    if(n1==0 and n2==0) {
        return;
    }
    if(n1 and n2) {
        if(a[0]<b[0]){
        e[i] = a[0];
        merge(a+1,b,e,n1-1,n2,i+1);
        }
        else{
            e[i] = a[0];
            merge(a,b+1,e,n1,n2-1,i+1);
        }
    }
    if(n1){
        e[i]=a[0];
        merge(a+1,b,e,n1-1,n2,i+1);
    }
    if(n2){
        e[i]=b[0];
        merge(a,b+1,e,n1,n2-1,i+1);
    }

}


int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,5,6};
    int b[] = {7,8,9,10,11};
    int e[11];
    merge(&a[0],&b[0],e,6,5);

    for(auto i:e) cout<<i<<" ";
    return 0;
}
