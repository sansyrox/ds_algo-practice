#include<iostream>
using namespace std;

bool ratInMaze(char maze[][10], int m, int n, char path[][10], int i, int j){
    // Base Case
    if(i==m and j==n) {
        return true;
        }
    if(i>m or j>n or maze[i][j]=='X'){
        return false;
    }
    // Rec Case
    bool rastaMila = ratInMaze(maze,m,n,path,i,j+1);
    if(rastaMila){
        return true;
    }
    rastaMila = ratInMaze(maze,m,n,path,i+1,j);

    return rastaMila;

    return 0;
}

int main(int argc, char const *argv[])
{
    char maze[10][10] = {
        "000X",
        "0X00",
        "00X0",
        "0X00"
        };
    char path[10][10];

    int m,n;
    m=5, n=4;
    cout<<ratInMaze(maze, m-1,n-1,path,0,0);
    return 0;
}
