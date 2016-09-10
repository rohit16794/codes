#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
typedef pair<ll,ll> PII;

struct comp
{
bool operator()(const PII &a,const PII &b)
	{return a.second>b.second;
}
};

class Graph
{
	int v;
	list<PII> *adj;
public:
	Graph(int v);
	void addEdge(int v,int w,int weight);
	void dijkstra(int src);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj= new list <PII> [v];
}

void Graph:: addEdge(int v,int w,int weight)
{
	adj[v].push_back(make_pair(w,weight));
	adj[w].push_back(make_pair(v,weight));
}

void Graph::dijkstra(int src)
{
	ll dist[v];
	bool marked[v];

	for(int i=0;i<v;i++)
	{
		dist[i]=INT_MAX;
		marked[i]=false;
	}

	dist[src]=0;

	priority_queue<PII,vector<PII>,greater<PII> > Q;
	Q.push(make_pair(src,0));

	while(!Q.empty())
	{
		int u=Q.top().first;
		Q.pop();
		if(marked[u])
			continue;

		list<PII> :: iterator it;

		for(it=adj[u].begin();it!=adj[u].end();it++)
		{
			int v=(*it).first;
			int weight= (*it).second;

			if(marked[v]==false and dist[u]+weight<dist[v])
				{
					dist[v]=dist[u]+weight;
					Q.push(make_pair(v,dist[v]));
				}
		}
		marked[u]=true;
	}
	for(int i=0;i<v;i++)
		cout<<dist[i]<<" ";
}
int main()
{
	Graph g(9);
	g.addEdge( 0, 1, 4);
    g.addEdge( 0, 7, 8);
    g.addEdge( 1, 2, 8);
    g.addEdge( 1, 7, 11);
    g.addEdge( 2, 3, 7);
    g.addEdge( 2, 8, 2);
    g.addEdge( 2, 5, 4);
    g.addEdge( 3, 4, 9);
    g.addEdge( 3, 5, 14);
    g.addEdge( 4, 5, 10);
    g.addEdge( 5, 6, 2);
    g.addEdge( 6, 7, 1);
    g.addEdge( 6, 8, 6);
    g.addEdge( 7, 8, 7);
 	
 	g.dijkstra(0);

	return 0;
}
