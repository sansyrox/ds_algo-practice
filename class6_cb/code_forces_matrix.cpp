#include<bits/stdc++.h>
using namespace std;

void inputArr(){
    int arr[6][6];
    int one_i=0,one_j=0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(arr[i][j]==1){
                one_i = i;
                one_j = j;
                // cout<<i<< " " << j;
                // arr[i][j] = 0;
                break;
            }
        }
    }
    // cout<<one_i<<" "<<one_j;
    int sum = abs(one_i - 3) + abs(one_j - 3);
    cout<<sum;

}

int main(){
    inputArr();
    return 0;
}