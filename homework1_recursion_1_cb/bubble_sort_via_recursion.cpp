#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    if(n<=1) return;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
        BubbleSort(arr,n-1);
    }
}

void ImprovedBubbleSort(int arr[], int n, int i=0){
    if(n<=1) return;
    if(i<n){
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
        ImprovedBubbleSort(arr,n,i+1);
    }
    ImprovedBubbleSort(arr,n-1);
}

int main(int argc, char const *argv[])
{
    /* code */
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    ImprovedBubbleSort(a,n);
    for (auto i: a) cout<<i;
    return 0;
}
