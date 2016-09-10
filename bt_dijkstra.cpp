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
	list<pii> *adj;

public:
	Graph(int v);
	void addedge(int v,int w,int weight);
	void dijkstra(int src);
};

Graph :: Graph(int v)
{
		this->v=v;
		adj = new list<pii> [v];
}

void Graph :: addedge(int v,int w,int weight)
{
	adj[v].push_back(make_pair(weight,w));
	adj[w].push_back(make_pair(weight,v));
}

void Graph :: dijkstra(int src)
{
	int dist[v];
	bool visited[v];

	for(int i=0;i<v;i++)
	{
		dist[i]=INT_MAX;visited[i]=false;
	}

	dist[src]=0;

	priority_queue<pii,vector<pii>,greater<pii> > q;
	q.push(make_pair(0,src));

	while(!q.empty())
	{
		int u=q.top().second;
		q.pop();

		if(visited[u])
			continue;

		list<pii> :: iterator it;
		visited[u]=true;

		for(it=adj[u].begin();it!=adj[u].end();it++)
		{
			int v=(*it).second;
			int currweight=(*it).first;

			if(!visited[v] and dist[u]+currweight<dist[v])
			{
				dist[v]=dist[u]+currweight;
				q.push(make_pair(dist[v],v));
			}
		}

	}
	for(int i=0;i<v;i++)
		cout<<dist[i]<<" ";

}


int main()
{
	Graph g(4);
	g.addedge(0,1,1);
	g.addedge(0,3,4);
	g.addedge(0,2,9);
	g.addedge(1,3,1);
	g.addedge(2,3,2);

	g.dijkstra(0);


	
	return 0;
}
