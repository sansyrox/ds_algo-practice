#include<iostream>
#include<unordered_map>
#include<list>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;

class Graph{
	unordered_map<string,list<string> > m;
public:
	Graph(int v)
	{
		int V=v;
	}

	void addEdge(string src, string dest, bool bidir=true)
	{
		m[src].push_back(dest);
		if(bidir)
			m[dest].push_back(src);
	}

	void print()
	{
		for(auto p:m)
		{
			string src= p.first;
			auto cities = p.second;
			cout<<src<<"-->";
			for(auto city: cities)
				cout<<"("<<city<<")";
			cout<<endl;
		}
	}

	void bfsTraversal(string src){
		queue<string> q;
		unordered_map<string, bool> visited;
		q.push(src);
		visited[src] = true;
		
		while(!q.empty()){
			string city = q.front();
			cout<<city<<" ";
			q.pop();

			// children of current node
			for(auto child:m[city]){
				if(!visited[child]){
					q.push(child);
					visited[child] = true;
					// cout<<child;
				}
			}
		}
	}


	void minDistance(string src, string des){
		queue<string> q;
		unordered_map<string, bool> visited;
		unordered_map<string, string> parent;
		unordered_map<string, int> distance;
		
		q.push(src);
		visited[src] = true;
		distance[src] = 0;

		while(!q.empty()){
			string city = q.front();
			cout<<city<<" ";
			q.pop();

			// children of current node
			for(auto child:m[city]){
				if(!visited[child]){
					q.push(child);
					visited[child] = true;
					distance[child] = distance[city] + 1;
					parent[child] = city;
					// cout<<child;
				}
			}
		}

		string temp= des;
		while(temp!=src){
			cout<<temp<<"<--";

		}
	}

	void dfsHelper(string node, unordered_map<string,bool> &visited){
		// Visit the current node and mark it as visited
		// Mark it as visited 
		// explore any unvisited child of that node --repeat
		cout<<node<<" ";
		visited[node] = true;

		for(auto child:m[node]){
			if(!visited[child]){
				dfsHelper(child,visited);
			}
		}

	}

	void dfsTraversal(string src){
		unordered_map<string, bool> visited;
		dfsHelper(src,visited);
	}

};


int main()
{
	Graph g(5);
	g.addEdge("Delhi","Amritsar",1);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Bhopal",6);
	g.addEdge("Delhi","Lucknow",3);
	g.addEdge("Jaipur","Amritsar",5);
	g.addEdge("Jaipur","Bhopal",6);
	g.addEdge("Bhopal","Mumbai",6);
	g.addEdge("Mumbai","Pune",6);


	g.dfsTraversal("Delhi");
	cout<<endl;
	g.bfsTraversal("Delhi");
	cout<<endl;
	g.minDistance("Delhi","Jaipur");


	return 0;



}