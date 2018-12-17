#include<iostream>
using namespace std;

void printNumber(int n){ //inc
    
    if(n==0){
        return;
    }
    printNumber(n-1);
    cout<<n<<" ";
    return ;
}


void printReverse(int n,int i=0){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printReverse(n-1);
}

int main(int argc, char const *argv[])
{
    printNumber(4);
    cout<<endl;
    printReverse(4);
    return 0;
}
