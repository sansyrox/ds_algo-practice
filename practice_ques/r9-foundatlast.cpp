#include<iostream>
using namespace std;

int lastIndexPresent(int *a, int n, int m, int index){ //index=-1 // n= n-1 input mai
	if(n==-1){
		return index;
	}

	// rec case
	if(a[n]==m){
		index = n;
		return index;
	}

	return lastIndexPresent(a,n-1,m,index);
}


int main(int argc, char const *argv[])
{
    int arr[2000];
	int n,m;
	cin>>n;

	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		arr[i] = temp;
	}
	cin>>m;
	n--;
	cout<<lastIndexPresent(arr,n,m,-1);
 

    return 0;
}
