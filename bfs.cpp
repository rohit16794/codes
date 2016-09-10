#include <bits/stdc++.h>
using namespace std;

int visited[100000];
int level[100000];

class Graph
{
	int v;
	vector <int> *adj;
public:
	Graph(int v);
	void addedge(int v,int w);
	void bfs(int s);
};

Graph :: Graph(int v)
{
	this->v=v;

	adj=new vector <int>  [v];
	for(int i=1;i<v;i++)
	{
		visited[i]=0;
		level[i]=-1;
	}
}
void Graph ::  addedge(int v,int w)
{
	adj[v].push_back(w);
//	adj[w].push_back(v);
} 

void Graph :: bfs(int s)
{
	for(int i=1;i<100000;i++)
		visited[i]=0;

visited[s]=1;
level[s]=0;
	queue <int> q;
	q.push(s);

	while(!q.empty())
	{
		int p=q.front();
		//cout<<p<<" ";
		q.pop();
		//cout<<adj[p][0];
cout<<adj[2].size()<<adj[3].size();
		/*for(int i=0;i<adj[p].size();i++)
		{
			if(visited[adj[p][i]]==0)
			{
				level[adj[p][i]]=level[p]+1;
				visited[adj[p][i]]=1;
				q.push(adj[p][i]);	
			}
		}*/
	}
}
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
		for(int i=0;i<n;i++)
		{
			level[i]=-1;
			visited[i]=0;
		}
		g.bfs(r);
		//cout<<"\n";
		for(int i=1;i<=n;i++)
{
	if(i!=r)
	{
		if(level[i]!=-1)
		cout<<level[i]*6<<" ";
	else
		cout<<level[i]<<" ";
	}
}
cout<<"\n";
}
	return 0;
}