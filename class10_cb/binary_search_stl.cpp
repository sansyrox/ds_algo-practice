#include<iostream>
using namespace std;

int returnLowerBound(int start , int end, int n ,  int* a){
    int mid = (start + end)/2;
   

    if(start>end){
        return -1;
    }

    int ans = -1;

    while(start<=end){
        mid = (start+end)/2;
         if(a[mid]== n){
            ans = mid;
            // start = mid + 1;
            end = mid - 1;
            // st
        }
        else if(a[mid]>n){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;

}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<returnLowerBound(0,n-1, 2,arr);


    // search(a,a+n)
    // binary_search(a,a+n,key) --> boolean prese
    // lower_bound(a, a+n, key) 
    // uper_bound(a, a+n, key) // upperbound ke next waala

    // if ka check

    auto first_occ = lower_bound(arr,arr+n,2) - arr;
    cout<< first_occ<< endl;

    

    return 0;
}
