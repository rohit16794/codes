#include <bits/stdc++.h>
using namespace std;


long long sum;
long long arr[1000005];
class Graph
{
	int v;
	int *visited;
	vector <int> *adj;
	
public:
	Graph(int v);
	void addedge(int v,int w);
	void dfs(int s);
	int check(int i);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj= new vector <int> [v+1];
	visited= new int[v+1];
	for(int i=1;i<=v;i++)
		visited[i]=0;
}

void Graph :: addedge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph :: dfs(int s)
{
	

	stack <int> q;
	visited[s]=1;
	q.push(s);

	while(!q.empty())
	{
		int p=q.top();
			sum+=arr[p];
		//cout<<adj[p].size()<<" ";
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

int Graph :: check(int i)
{
	return visited[i];
}

int main()
{
	long long t,n,m,x,y;
	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		
		Graph g(n);
		
		while(m--)
		{
			cin>>x>>y;
			g.addedge(x,y);
			g.addedge(y,x);
		}
		//long long arr[n+1];
		for(long long i=1;i<=n;i++)
			cin>>arr[i];

		long long max=0;

		for(int i=1;i<=n;i++)
		{
			sum=0;
			if(g.check(i)==0)
			{
				g.dfs(i);
			}
			if(sum>max)
			{
				max=sum;
			}
		}
		cout<<max<<"\n";
	}
	
	return 0;
}