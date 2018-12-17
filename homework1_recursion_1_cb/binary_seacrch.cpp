#include<iostream>
using namespace std;

int binary_search(int arr[] ,int end, int number , int mid, int start=0){
    if(mid<=end){
        // if(arr[mid]<=number){
            
        // }
        if(arr[mid]>number) {
            end = mid;
            mid = (start + end)/2;
            // cout<<arr[mid]<<" "<<number;
            binary_search(arr,end,number, mid, start);
        } else if(arr[mid]<number) {
            start = mid;
            mid = (start + end)/2;
            binary_search(arr,end,number, mid, start);
        }
        // ask about if statements
        return mid;

    } 
    return -1;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6};
    int end = (sizeof(a)/sizeof(int) - 1);
    // cout<<end;
    // if(binary_search(a,end,2,end/2,0)) cout<<"YES";
    // else cout<<"NO!";
    int mid = end/2;
    // cout<<mid;
    int c = binary_search(a,end,2,mid,0);
    cout<<c;
    
    return 0;
}
