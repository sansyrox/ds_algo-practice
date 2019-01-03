#include<iostream>
using namespace std;
int checkSorted(int *a,int n ,int i=0){
  if(a[i]>a[i+1]){
    return 0;
  }
  if(i==n-2 and a[i]<=a[i+1]){
    return 1;
  }
  
  return checkSorted(a,n,i+1);
  
}

int main() {
  int arr[]={1,2,3,4,5};
  int n=5;
  cout<<checkSorted(arr,5,0);
	return 0;
}