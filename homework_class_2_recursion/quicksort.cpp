#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int i = s;
    int j = mid + 1;
    int k = 0;
    int temp[1000];

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

    for(int i=s; i<=e; i++) arr[i] = temp[i];

}

void quickSort(int *arr, int s, int e) {
    int p = e;
    if(p==s){
        return;
    }
    quickSort(arr,s,p);
    quickSort(arr,p,e);
    // merge(arr,s,p);

}

int main(int argc, char const *argv[])
{
    
    return 0;
}
