#include<bits/stdc++.h>
using namespace std;

void printFirstNeg(int *arr, int k, int n){
    queue<int> a;
    for(int i=0; i<k; i++){
        if(arr[i]<0){
            a.push(i);
        }
    }

    if(!a.empty()){
		cout<<arr[a.front()]<<" ";
	}else cout<<0<<" ";

    for(int i=k ; i<n ; i++){
        while((not a.empty()) and (a.front()<=i-k)){
            a.pop();
        }

        if(arr[i]<0){
			a.push(i);
		}

        if(a.empty()) cout<<"0 ";
        else cout<<arr[a.front()]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {-1,2,3,-4,5};
    int n=5;
    printFirstNeg(arr,3,5);
    return 0;
}