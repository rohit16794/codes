#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

class Graph
{
	int v;
	list<int> *adj;

public:
	Graph(int v);
	void addEdge(int v,int w);
	void dfs_allpaths(int s,int d,int visited[],int path[],int &index);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj = new list<int> [v];
}

void Graph :: addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph :: dfs_allpaths(int s,int d,int visited[],int path[],int &index)
{
	visited[s]=1;
	path[index++]=s;

	if(s==d)
	{
		for(int i=0;i<index;i++)
			cout<<path[i]<<" ";
		cout<<"\n";
	}
	else
	{
		for(list<int>:: iterator it=adj[s].begin();it!=adj[s].end();it++)
		{
			if(!visited[*it])
				dfs_allpaths(*it,d,visited,path,index);
		}
	}
	--index;
	visited[s]=0;
}

int main()
{
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(2, 0);
    g.addEdge(2, 1);
    g.addEdge(1, 3);
 
    int visited[4];
    for(int i=0;i<4;i++)
    	visited[i]=0;

    int path[4];
    int index=0;
    g.dfs_allpaths(2,3,visited,path,index);

	return 0;
}
