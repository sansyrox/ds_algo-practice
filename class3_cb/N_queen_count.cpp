#include<iostream>
#include<math.h>
using namespace std;

bool canPlace(int board[][10], int n, int x, int y){
        // Col check
        for(int i=0; i<n; i++){
            if(board[i][y]==1) return false;
            for(int j=0; j<n; j++){
                if(!(x==i and y==j)){
                    if(board[i][j]==1 and (abs(y-j)/abs(x-i))==1) return false;
                }
        }
        
    return true;
}
}

bool NQueen(int n, int board[][10], int i) {
    // Base Case
    if(i==n) {
        // Print board
        return true;
    }
    // Rec Case
    // Try to place queen at every column/postion in the current row
    // cnt = 0;
    int count =0;
    for(int j=0; j<n; j++){
    if(canPlace(board,n,i,j)){
        board[i][j] = 1;
        // cnt+= NQueen(n, board,i+1);
        int aagekaCount = NQueen(n,board,n+1);
        count+= aagekaCount;
        board[i][j] = 0;
    }
    }
    
    return count;


}


int main(int argc, char const *argv[]) {
    int board[10][10]={0};
    int n;
    cin>>n;
    cout<<NQueen(n,board,0);
    return 0;

}
