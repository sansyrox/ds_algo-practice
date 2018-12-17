#include<iostream>
using namespace std;

bool ratInMaze(char maze[][10], int m, int n, int path[][10], int i, int j){
    // Base Case
    path[i][j] = 1;
    if(i==m and j==n) {
        for(int x=0; x<=m;x++){
            for(int y=0; y<=n; y++){
                cout<<path[x][y]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
        }
    if(i>m or j>n or maze[i][j]=='X'){
        return false;
    }
    // Rec Case
    path[i][j]=1;
    bool rastaMila = ratInMaze(maze,m,n,path,i,j+1);
    if(rastaMila){
        path[i][j] = 0;
        // return true;
    }
    rastaMila = ratInMaze(maze,m,n,path,i+1,j);
    // cout += ratInMaze(maze,m,n,path,i+1,j) + ratInMaze(maze,m,n,path,i,j+1);
    // Backtracking
    path[i][j] = 0;
    return rastaMila;

}

int main(int argc, char const *argv[])
{
    char maze[10][10] = {
        "000X",
        "0X00",
        "00X0",
        "0X00"
        };
    int path[10][10];

    int m,n;
    m=5, n=4;
    cout<<ratInMaze(maze, m-1,n-1,path,0,0);
    return 0;
}
