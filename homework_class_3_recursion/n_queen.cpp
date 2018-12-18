#include<iostream>
using namespace std;

bool checkSafety(int chessBoard[][10], int x, int y, int n){
    for(int i=0; i<n;i++){
        if(chessBoard[i][y]==1) return false;
        for(int j=0; j<n;j++){
            if(chessBoard[i][j]==1 and (abs(y-j)/abs(x-i))==1) return false;
        }
    }
    return true;
}

int NQueen(int chessBoard[][10], int n,int i){ // n=number of rows
    if(i==n) {
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                cout<<chessBoard[i][j]<<" ";
            }
            cout<<endl;
        }
        return 1;
    }
    if(i>n){
        return 0;
    }
    for(int j=0; j<n; j++){
        if(checkSafety(chessBoard, i, j, n)){
            chessBoard[i][j] = 1;
            int aageRaasta = NQueen(chessBoard,n,i+1);
            if(aageRaasta){
                return 1;
            }
            chessBoard[i][j] = 0;
        }

    }
    return 0;

}

int main(int argc, char const *argv[])
{
    int board[10][10]={0};
    int n;
    cin>>n;
    cout<<NQueen(board,n,0);
    return 0;
}
