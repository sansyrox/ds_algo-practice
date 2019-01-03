#include<iostream>
using namespace std;

void insertionSort(int a[], int n){

    for(int i=1; i<n; i++){
        int j = i-1;
        int no = a[i];
        while(j>=0 && a[j]>no){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = no;
    }

}

int main(int argc, char const *argv[])
{
    int a[] = {5,4,1,2,3};
    int n = 5;

    // selectionSort(a,n);
    insertionSort(a,n);
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}