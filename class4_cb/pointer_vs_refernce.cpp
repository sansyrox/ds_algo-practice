#include<iostream>
using namespace std;

int& inc(int &i){ //pass by refeence using pointer
    i=i+1;
    // return i;
    return i;
}

int main(int argc, char const *argv[])
{
    int x = 10;
    inc(x);
    cout<< x <<endl;

    int &z = x;
    inc(z) = 15;

    // y++;
    cout<<x<<endl<<endl;
    return 0;
}
