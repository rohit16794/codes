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
	ll v;
	list<pii> *adj;

public:
	Graph(ll v);
	void addEdge(ll v,ll w,ll weight);
	void topological_sort(ll v,ll visited[],stack<ll> &s);
	void dag_shortest(ll source);
};

Graph :: Graph(ll v)
{
	this->v=v;
	adj = new list<pii> [v];
}

void Graph :: addEdge(ll v,ll w,ll weight)
{
	adj[v].push_back(make_pair(w,weight));
}

void Graph :: topological_sort(ll v,ll visited[],stack<ll> &s)
{
	visited[v]=1;

	for(list<pii>:: iterator it=adj[v].begin();it!=adj[v].end();it++)
	{
		if(!visited[(*it).first])
			topological_sort((*it).first,visited,s);
	}
	s.push(v);
}

void Graph :: dag_shortest(ll source)
{
	ll dist[v];
	for(int i=0;i<v;i++)
		dist[i]=INF;

	dist[source]=0;

	ll visited[v];
	for(int i=0;i<v;i++)
		visited[i]=0;

	stack<ll> s;

	for(ll i=0;i<v;i++)
	{
		if(visited[i]==0)
				topological_sort(i,visited,s);
	}

	while(s.empty()==false)
	{
		int u=s.top();
		s.pop();
		for(list<pii>:: iterator it=adj[u].begin();it!=adj[u].end();it++)
		{
			int vertex=(*it).first;
			int weight=(*it).second;

			if(dist[u]!=INF and dist[u]+weight < dist[vertex])
				dist[vertex]=dist[u]+weight;
		}
	}

	for(int i=0;i<v;i++)
		cout<<dist[i]<<" ";
}


int main()
{
	 Graph g(6);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 2, 2);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(2, 3, 7);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    g.dag_shortest(1);
	return 0;
}
