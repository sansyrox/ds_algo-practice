#include<bits/stdc++.h>
using namespace std;

class Graph{

    list<int> *l;

    Graph(int V){
        l = new list<int>[V+1]; // array of lists
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
    }

    void bfs(int s){
        bool *visited = new bool[V]{0};
        q.push(s);
        visited[s] = true;

        while(!q.empty()){
            int f = q.front();
            q.pop();

            for(auto nbr_cell)
        }

    }
};


int main(int argc, char const *argv[])
{
    Graph<int> g;
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;

    return 0;
}
