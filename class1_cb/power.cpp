#include<iostream>
using namespace std;

int power(int a,int n,int i=1){
    if(i<n){
        a=a*power(a,n-1,i++) ;
    }
    return a;
}

int prowerCB(int a, int n){
    if(n>0){
        a = a * prowerCB(a,n-1);
    } return n;


}
int main(){
    cout<<power(2,3)<<endl;
}