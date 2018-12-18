#include<iostream>

using namespace std;

bool RatInAMaze(char a[10][10],char path[10][10],int m, int n, int i, int j){
    path[i][j]=1;
    if(i==m and j==n){
        for(int x=0;i<=m;i++){
            for(int y=0;j<=n;j++){
                cout<<path[x][y]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    if(i>m or j>n or a[i][j]=='X'){
        return false;
    }
    // Rec case
    
    path[i][j]=1;
    bool aageRaasta = RatInAMaze(a,path,m,n,i+1,j);
    if(aageRaasta) {
        // path[i][j] = 1;
        // return true;
        path[i][j] = 0;
        }

    aageRaasta = RatInAMaze(a,path,m,n,i,j+1);
    path[i][j] = 0;
    return aageRaasta;

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
    cout<<RatInAMaze(maze,path,m-1,n-1,0,0);
    return 0;
}
