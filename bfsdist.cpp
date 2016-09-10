#include <bits/stdc++.h>
using namespace std;

class Graph
{
	int v;
	vector <int> *adj;
	int *visited;
	int *level;
public:
	Graph(int v);
	void addedge(int v,int w);
	void bfs(int s);
	void traverse(int r);
};

void Graph :: traverse(int r)
{
	for(int i=1;i<=v;i++)
	{
		if(i!=r)
		{
			if(level[i]==-1)
				cout<<level[i]<<" ";
			else
			{
				cout<<level[i]*6;
			}
		}
		//cout<<level[i]<<" ";
	}
	cout<<"\n";
}
Graph :: Graph(int v)
{
	this->v=v;
	adj=new vector <int> [v+1];
	
	level=new int [v+1];
}

void Graph:: addedge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph :: bfs(int s)
{
	visited=new int [v+1];
	for(int i=0;i<=v;i++)
	{
		visited[i]=0;
		level[i]=-1;
	}
level[s]=0;
	visited[s]=1;
	queue <int> q;
	q.push(s);

int p;
while(!q.empty())
{
	p=q.front();
	q.pop();

	for(int i=0;i<adj[p].size();i++)
	{
		if(!visited[adj[p][i]])
		{
			visited[adj[p][i]]=1;
			level[adj[p][i]]=level[p]+1;
			q.push(adj[p][i]);
		}
	}
}

}//end of bfs.

int main()
{
	int t;
	cin>>t;

	int n,m,x,y,r;
	while(t--)
	{
		cin>>n>>m;
		Graph g(n);
		while(m--)
		{
			cin>>x>>y;
			g.addedge(x,y);
		}
		cin>>r;
		g.bfs(r);
		g.traverse(r);
	}
	return 0;
}