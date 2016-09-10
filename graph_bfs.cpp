#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)


class Graph
{
	int v;
	list<int> *adj;
public:

	Graph(int v);
	void add_edge(int v,int w);
	void bfs(int source);
};

Graph :: Graph (int v)
{
	this->v = v;
	adj = new list<int> [v];
}

void Graph :: add_edge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::bfs(int source)
{
	bool visited [v];

	for(int i=0;i<v;i++)
		visited[i]=false;

	visited[source]=true;
	queue <int> q;

	q.push(source);

	while(!q.empty())
	{
		int p=q.front();
		cout<<p<<" ";
		q.pop();

		list<int> :: iterator it;

		for(it=adj[p].begin();it!=adj[p].end();it++)
		{
			if(visited[*it]==false)
			{
				visited[*it]=true;
				q.push(*it);
			}
		}
	}
}

int main()
{
	 Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    g.bfs(2);

	return 0;
}
