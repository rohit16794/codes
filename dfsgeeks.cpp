#include <bits/stdc++.h>
using namespace std;

int visited[100];
vector<int> adj[100];

class Graph
{
	int v;
public:
	Graph(int v);
	void addedge(int v,int w);
	void dfs(int s);
};

Graph:: Graph(int v)
{
	this->v=v;
}

void Graph:: addedge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph:: dfs(int s)
{
	for(int i=1;i<100;i++)
		{visited[i]=0;}

	stack <int> q;
	q.push(s);
	visited[s]=1;
	
	while(!q.empty())
	{
		int p=q.top();
	cout<<p<<" ";
	
	q.pop();

	for(int i=0;i<adj[p].size();i++)
	{
		if(visited[adj[p][i]]==0)
		{
			visited[adj[p][i]]=1;
			q.push(adj[p][i]);	
		}
	}
	}
}

int main()
{Graph g(4);
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);


    g.dfs(2);
	return 0;
}