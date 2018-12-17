#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int i = s;
    int mid = (s + e)/2;
    int j = mid + 1;
    int k = s;
    int temp[1000]={0};

    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i<=mid) {
        temp[k++] = arr[i++];
    }

    while(j<=e) {
        temp[k++] = arr[j++];
    }

    for(int i=s; i<=e; i++) {arr[i] = temp[i];}

    return;

}

void mergeSort(int *arr, int s, int e) {
    // Base Case
    if(s >= e) {
        return;
    }
    // Divide
    int mid = (s + e)/2;
    // Sort
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    // Merge
    merge(arr,s,e);

}

int main(int argc, char const *argv[])
{
    int a[100]={0};
    int e;
    cin>>e;
    for(int i=0; i<e; i++) cin>>a[i];
    mergeSort(a,0,e-1);
    for(int i=0; i<=e; i++) cout<<a[i]<<" ";
    return 0;
}
