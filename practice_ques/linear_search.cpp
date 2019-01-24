#include<iostream>
using namespace std;

int linearSearch(int *arr, int key, int n,int i=0){
    // Base case
    if(i==n){
        return -1;
    }
    if(arr[0]==key){
        return i;
    }

    return linearSearch(arr+1,key,n,i+1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,6,7,7};
    int key = 5;
    int n = sizeof(arr)/sizeof(int);
    int x = linearSearch(arr,key,n);
    cout<<x;
    return 0;
}
