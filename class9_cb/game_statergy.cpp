#include<iostream>
using namespace std;

int gameReturn(int* arr, int i, int j){
    if(i>j){
        return 0;
    }
    // Rec Case
    int op1 = arr[i] + min(gameReturn(arr, i+1, j-1),gameReturn(arr,i+2,j)); // min since Opponent will give the least
    int op2 = arr[j] + min(gameReturn(arr, i, j-2),gameReturn(arr,i+1,j-1));

    return max(op1,op2);

}


int main(int argc, char const *argv[])
{
    int a[] = {1,2,3};
    cout<<gameReturn(a,0,2);
    return 0;
}
