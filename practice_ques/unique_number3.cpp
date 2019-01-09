#include<iostream>
using namespace std;

void returnNumber(int *arr, int n){
	int charA[64] = {0};

	for(int j=0 ; j<n ; j++){
		int i =0;
		int no = arr[j];
		while(n>0){
			charA[i] += (no&1);
			i++;
			no = no>>1;
		}

	for(int i=0; i<64; i++){
		cout<<charA[i]<<" ";
	}

	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,2,1,2,1,3};
	int n = sizeof(arr)/sizeof(int);
	returnNumber(arr,n);
	return 0;
}
