// #include<iostream>
// using namespace std;
// #include<math.h>

// int numberOfSteps(int n, int steps=0){
//     if(n==1){
//         steps+=1;
//         // cout<<steps;
//         return steps;
//     }else if(n==0){
//         // cout<<steps;
//         return steps;
//     }
//     int max_power = log2(n);
//     n = int(n/pow(2,max_power));
//     // cout<<n<<" ";
    
//     numberOfSteps(n,steps+1);

//     // return steps;
// }

// int main() {
// 	int t;
// 	cin>>t;
//     // cout<<max_power(5)<<" ";
// 	while(t){
// 	  t--;
// 	  int n;
// 	  cin>>n;
// 	  cout<<numberOfSteps(n);
// 	}
// 	return 0;
// }



#include<iostream>
using namespace std;
#include<math.h>

int numberOfSteps(int n){
    int steps=0;
    int max_power = log2(n);
    while(n){
    n = int(n/pow(2,max_power));
    steps++;
    // cout<<n<<" ";
    }
    return steps;
}

int main() {
	int t;
	cin>>t;
    // cout<<max_power(5)<<" ";
	while(t){
	  t--;
	  int n;
	  cin>>n;
	  int steps = numberOfSteps(n);
      cout<<steps;
	}
	return 0;
}