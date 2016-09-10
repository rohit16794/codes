# include <bits/stdc++.h>
using namespace std;

class Graph
{
	int v;
	vector <int> *adj;
	int *visited;

public: 
	Graph(int v);
	void addedge(int v,int w);
	int dfs(int s,int l);
};

Graph :: Graph(int v)
{
	this->v = v;
	adj= new vector <int> [v+1];
}

void Graph :: addedge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

int Graph :: dfs(int s,int l)
{
	visited = new int [v+1];
	for(int i=1;i<=v;i++)
	{
		visited[i]=0;
	}
	visited[s]=1;
	stack <int> q;
	q.push(s);

	while(!q.empty())
	{
		int p=q.top();
		q.pop();
		for(int i=0;i<adj[p].size();i++)
		{
			if(visited[adj[p][i]]==0)
			{
				visited[adj[p][i]]=1;
				if(adj[p][i]==l)
					{return 1;}
				q.push(adj[p][i]);
			}
		}

	}
	return 0;
}

int main()
{
	int t;
	cin>>t;
	int n,k,check;


	while(t--)
	{
		cin>>n>>k;
		Graph g(n);
		check=1;
		int x,y;string s;
		while(k--)
		{
			cin>>x>>s>>y;
			if(s=="=")
			{
				g.addedge(x,y);
			}
			else
			{
				if(g.dfs(x,y))
				{
					check=0;
				}
			}
		}
		if(check)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}