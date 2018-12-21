#include<iostream>
#include<climits>
using namespace std;

int main() {
    // int size = INT32_MAX;
    long long int a[1000000];
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
      int max = 0;
      for(int j=0; j<n;++j){
        if(a[j]>max){
          max = a[j];
        }
      }
      cout<<max;
        return 0;
}