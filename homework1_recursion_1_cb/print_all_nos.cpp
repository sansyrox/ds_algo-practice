#include<iostream>

using namespace std;

void returnNumber(int n) { // n->1
    if (n==0) return ;
    cout<<n<<" ";
    returnNumber(n-1);
}

void returnOrderedNumber(int n){ // 1->n
    if(n==0) return;
    returnOrderedNumber(n-1);
    cout<<n<<" ";
}

int main(int argc, char const *argv[])
{
    /* code */
    returnNumber(4);
    cout<<"\n";
    returnOrderedNumber(4);
    return 0;
}
