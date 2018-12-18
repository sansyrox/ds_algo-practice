#include<iostream>
using namespace std;

int merge(int *a,int s,int e){
    int temp[100] ;
    int mid = (s+e)/2;
    int i = s;
    int j = (mid +1);
    int k=s;
    int cnt=0;
    while(i<=mid and  j<=e){
		if(a[i]<=a[j]){
			temp[k++] = a[i++];
		}
		else{
			temp[k++] = a[j++];
            cnt+=mid-i+1;
		}
	}
	//What after?
	while(i<=mid){
		temp[k++] = a[i++];
	}
	while(j<=e){
		temp[k++] = a[j++];
	}
    for(int i=s;i<=e;i++){
		a[i] = temp[i];
	}
	return cnt;
}

int mergeSort(int *a, int s, int e){
    if(s>=e){
		return 0;
	}
    // Create a midPoint
    int mid = (s+e)/2;

    // Sort two arrays
    int x = mergeSort(a,s,mid);
    int y = mergeSort(a,mid+1,e);

    // Merge two arrays
    int z = merge(a,s,e);
    return x+y+z;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,3,2,6};
    // cout<<mergeSort(a,0,2);
    for(auto i:a) cout<<i;
    return 0;
}
