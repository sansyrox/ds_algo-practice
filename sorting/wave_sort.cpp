#include<iostream>
using namespace std;

void wave_sort(int arr[], int n){

	if(arr[0] < arr[1]){
		swap(arr[0],arr[1]);
	}

    for(int i=1 ; i<n; i+=2){
		if(arr[i]<arr[i-1]){
			swap(arr[i],arr[i-1]);
		}
	}

}

void wave_sort2(int a[], int n){
	for(int i=0; i<n; i+=2) {
		if(i>0 && a[i-1]>a[i]) {
			swap(a[i],a[i-1]);
		}

		if(i<n-1 && a[i+1]>a[i]){
			swap(a[i],a[i+1]);
		}

	}
}

int main(int argc, char const *argv[])
{
    /* code */
	int a[] = {1,2,3,5,3};
	int n = 5;
	wave_sort2(a, n);

	for(int i=0; i<n; i++) cout<<a[i] << " ";
    return 0;
}
