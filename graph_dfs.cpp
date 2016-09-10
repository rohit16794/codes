#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

class Graph
{
	int v;
	list <int> *adj;

public:
	Graph(int v);
	void addEdge(int v,int w);
	void dfs(int source);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj = new list<int> [v];
}

void Graph :: addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph :: dfs(int source)
{
	bool visited[v];

	for (int i = 0; i < v; ++i)
	{
		visited[i]=false;
	}

		visited[source]=true;
		stack<int> s;
		s.push(source);

		while(!s.empty())
		{
			int p=s.top();
			cout<<p<<" ";
			s.pop();

			list <int> :: iterator it;

			for(it=adj[p].begin();it!=adj[p].end();it++)
			{
				if(visited[*it]==false)
				{
					visited[*it]=true;
					s.push(*it);
				}
			}
		}
}


int main()
{
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.dfs(2);
	return 0;
}
