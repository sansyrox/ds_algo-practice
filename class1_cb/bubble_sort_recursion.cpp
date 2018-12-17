#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// // single loop

// void bubbleSort(int arr[], int n){
//     if(n==1) return;

//     for (int i=1; i<n; i++){
//         if(arr[i-1] > arr[i]){
//             swap(arr[i-1],arr[i]);
//         }
//         bubbleSort(arr, n-1);
//     }
// }

// void bubbleSort( int *a, int n){
//     if(n==1){
//         return ;
//     } 

//     for (int i=0; i<n-1; i++){
//         if(a[i]>a[i+1]){
//             swap(a[i],a[i+1]);
//         }
//         bubbleSort(a,n-1);
//     }
    
// }


// Bubble Sort 2

void bubbleSort2(int *a, int n, int i){
    if(n==1){
        return;
    }
    if(i==n-1){
        bubbleSort2(a,n-1,0);
        return;
    }
    if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    bubbleSort2(a,n,i+1);
}

int main(int argc, char const *argv[])
{
    int a[] = {3,4,2,1} ;
    int n = sizeof(a)/sizeof(int);
    bubbleSort2(a,n,0);

    for(auto i:a) cout<<i;
    return 0;
}
