#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

class Graph
{
	int v;
	list<int> *adj;
	int *visited;
	//int *level;
public:
	Graph(int v);
	void addedge(int v,int w);
	void bfs(int source,int item);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj = new list<int> [v+1];
	visited = new int [v+1];
//	level= new int [v+1];
}

void Graph :: addedge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
	
}

void Graph :: bfs(int source,int item)
{
	queue<int> q;
	q.push(source);
	int level[v+1];
	level[source]=1;

	for(int i=0;i<=v;i++)
		visited[i]=0;
	visited[source]=1;
	//cout<<q.size();
	while(!q.empty())
	{
		int p= q.front();
		q.pop();
		list<int> :: iterator it;
		for(it= adj[p].begin();it!=adj[p].end();it++)
		{
			if(visited[*it]==0)
			{
				level[*it]=level[p]+1;
			q.push(*it);	
			visited[*it]=1;
			}
					}
	}
	ll count =0;
	for(int i=1;i<=v;i++)
	{
		if(leve[i]==item)
			++count;
	}
	cout<<count;

//	cout<<level[item];



}
int main()
{
	int ver,a,b,x;
	cin>>ver;
	Graph g(ver);

	--ver;

	while(ver--)
	{
		cin>>a>>b;
		g.addedge(a,b);
	}
	//cout<<ver<<"Rohit";

	//cout<<"Hahahaha";
	cin>>x;
	//cout<<x;
	
	g.bfs(1,x);

	
	return 0;
}
