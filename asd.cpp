# include <bits/stdc++.h>
# define pair <int, int> PII;
using namespace std;
int maximum;
class Graph
{
	int v;
	vector<PII> *adj;
	int *visited;
	int *dist;
public:
	Graph(int v);
	void addedge(int v,int w,int weight);
	int bfs(int s);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj= new vector<PII> [v+1];
}

void Graph :: addedge(int v,int w,int weight)
{
	pair <int, int> d;
	adj[v].push_back(d(w,weight));
	adj[w].push_back(d(v,weight));

	//adj[w].push_back(d);
}

int Graph :: bfs(int s)
{
	visited = new int [v+1];
	dist = new int [v+1];
	maximum=0;
	int distance;

	for(int i=1;i<=v;i++)
		visited[i]=0;

	visited[s]=1;
	queue <int> q;
	q.push(s);

	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		distance=0;
		for(int i=0;i<adj[p].size();i++)
		{
			if(visited[adj[p][i]]==0)
			{
				visited[adj[p][i]]=1;
				if(adj[p][i].second>dist)
				{
					dist=adj[p][i].second;
				}	
				q.push(make_pair(adj[p][i].first,adj[p][i].second));
			}
		}
		maximum+=distance;

	}
	return maximum;
}
int main()
{
	int t;
	cin>>t;
	int x,y,f;
	int n;

	while(t--)
	{
		cin>>n;

		Graph g(n);
		int k=n-1;
		while(k--)
		{
			cin>>x>>y>>f;
			g.addedge(x,y,f);
		}
		cout<<g.bfs(1)<<"\n";
	}
	return 0;
}