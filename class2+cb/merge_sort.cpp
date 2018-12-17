#include<iostream>
using namespace std;

void merge(int *a, int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = (mid+1);
    int k = s;
    int temp[1000];

    while(i<=mid and j<=e){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e) {
        temp[k++] = a[j++];
    }
    for(int i=s; i<e; i++) a[i]=temp[i];
}

void mergeSort(int *a, int s, int e) {
    //Base Case
    if(s>=e){
        return;
    }
    //Recursive case
    int mid = (s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,e);

}

int main(int argc, char const *argv[])
{
    int a[] = {1,5,2,6,3,0};
    mergeSort(a,0,5);
    for(auto i:a) cout<<i;
    return 0;
}
