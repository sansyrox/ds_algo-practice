#include<iostream>

using namespace std;

void dnf_sort(int arr[], int n){
    int start = 0;
    int mid = 0;
    int end = n-1;

    while(mid<end){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++; mid++;
        } else if(arr[mid]==1) {
            mid++;
        } else if(arr[mid]==2) {
            swap(arr[mid],arr[end]);
            end--;
        }
    }

}

int main(int argc, char const *argv[])
{
    int a[] = {0,1,2,1,2,1,0};
    int n = sizeof(a)/sizeof(int);
    // cout<<n;
    dnf_sort(a,n);
    for(auto i: a) cout<<i;

    return 0;
}
