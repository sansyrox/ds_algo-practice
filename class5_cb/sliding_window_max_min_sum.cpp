#include<iostream>
#include<queue>
using namespace std;

void firstNegative(int arr[],int n, int k){
	queue<int> qu_neg;
	queue<int> qu_pos;

	for(int i=0; i<k; i++){
		if(arr[i]<0){
			qu_neg.push(i);
		}
        if(arr[i]>0){
			qu_pos.push(i);
		}
	}
	cout<<arr[qu_neg.front()]+ arr[qu_pos.front()]<<" ";

	for(int i=k; i<n; i++){
		while((not qu_pos.empty()) and (qu_pos.front()<=i-k) and (not qu_neg.empty()) and (qu_neg.front()<=i-k)) {
			qu_pos.pop();
			qu_neg.pop();
		}

		if(arr[i]<0){
			qu_neg.push(i);
		}
        if(arr[i]>0){
			qu_pos.push(i);
		}

			cout<<arr[qu_neg.front()] + arr[qu_pos.front()]<<" ";
	}
}


int main(int argc, char const *argv[])
{
	int arr[7] = {2,5,-1,7,-3,-1,-2};
	firstNegative(arr,7,5);
	return 0;
}
