// #include<iostream>
// using namespace std;

// int checkFirstNeg(int *a, int front, int rear){
//     for(int i=front; i<=rear; i++){
//         if(a[i]<0) return a[i];    
//     }
//     return 0;
// }

// void printMinInEachWindow(int *a, int k){
//     int front = 0;
//     int n = sizeof(a)/sizeof(int);
//     int rear = k-1;
//     while(rear<=(n-1)){
//         cout<<checkFirstNeg(a,front,rear)<<" ";
//         front++;
//         rear++;
//     }
// }
// // Complexity is n*k

// int main(int argc, char const *argv[])
// {
//     /* code */
//     return 0;
// }


#include<iostream>
#include<queue>
using namespace std;

void firstNegative(int arr[],int n, int k){
	queue<int> qu;
	for(int i=0; i<k; i++){
		if(arr[i]<0){
			qu.push(i);
		}
	}
	if(!qu.empty()){
		cout<<arr[qu.front()]<<" ";
	}else cout<<0<<" ";

	for(int i=k; i<n; i++){
		while((not qu.empty()) and (qu.front()<=i-k)) {
			qu.pop();
		}

		if(arr[i]<0){
			qu.push(i);
		}

		if(not qu.empty()){
			cout<<arr[qu.front()]<<" ";
		} else {
			cout<<"0 " ;
		}
	}
}


int main(int argc, char const *argv[])
{
	int arr[] = {-1,2,3,-4,5};
    int n=5;
	firstNegative(arr,5,3);
	return 0;
}
