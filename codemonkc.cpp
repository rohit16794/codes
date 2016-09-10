#include <bits/stdc++.h>
using namespace std;
int c;int mini;
int *visited;
class Graph
{
	int v;
	
	vector <int> *adj;
public:
	Graph(int v);
	void addedge (int v,int w);
	void dfs(int s);
};

Graph :: Graph(int v)
{
	this->v=v;
	
	adj=new vector <int> [v+1];
}

void Graph :: addedge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph :: dfs(int s)
{
	
	stack <int> q;
	q.push(s);
	visited[s]=1;
	while(!q.empty())
	{
		int p = q.top();
		q.pop();

		for(int i=0;i<adj[p].size();i++)
		{
			if(visited[adj[p][i]]==0)
			{
				++c;
				visited[adj[p][i]]=1;
				q.push(adj[p][i]);
			}
		}
	}
	if(c<mini)
		mini=c;
}
int main()
{
	int n,d,x,y;
	cin>>n>>d;
	Graph g(n);
	while(d--)
	{
		cin>>x>>y;
		g.addedge(x,y);
	}	
c=1;mini=100000;

	visited = new int [n+1];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		visited[j]=0;

		
		if(visited[i]==0)
		{
			g.dfs(i);
		}
	}
	if(mini==0)
	cout<<mini+1;
	else
		if(mini==n)
			cout<<"1";
		else
	cout<<mini;

	return 0;
}