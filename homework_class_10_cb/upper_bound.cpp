#include<iostream>
using namespace std;

int returnUpperBoundIndex(int *arr, int q , int start , int end){
	int ans = -1;
	while(start <= end){
		int mid = (start + end)/2;
		if(arr[mid]==q){
			ans = mid;
			start = mid + 1;
		}
		else if(arr[mid] > q){
			end = mid -1;
		}
		else {
			start = mid + 1;
		}

	}
	return ans;

}


int main(int argc, char const *argv[])
{
	int arr[] = {1,2,2,3,4};
	int n = sizeof(arr)/sizeof(int);

	return 0;
}
