#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

class Graph
{
	int v;
	bool *visited,*recstack;
	list<int> *adj;

	public:
	Graph (int v);
	void addEdge(int v,int w); 
	bool iscyclicutil(int v,bool visited[], bool *recstack);
	bool iscyclic(int v);
};

Graph ::Graph(int v)
{
	this->v=v;
	adj = new list<int> [v];
} 

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

bool Graph  :: iscyclicutil(int v,bool visited[],bool *recstack)
{
	visited[v]=true;
	recstack[v]=true;
	list<int> :: iterator it;
	
	for(it=adj[v].begin();it!=adj[v].end();it++)
	{
		if(!visited[*it] and iscyclicutil(*it,visited,recstack))
		{
			return true;
		}
		else
			if(recstack[*it])
				return true;
	}
	recstack[v]=false;
	return false;
}

bool Graph :: iscyclic(int v)
{
	visited = new bool [v];
	recstack = new bool [v];

	for(int i=0;i<v;i++)
	{
		visited[i]=false;
		recstack[i]=false;
	}

	for(int i=0;i<v;i++)
	{
		if(iscyclicutil(i,visited,recstack))
			return true;
	}
return false;

}

int main()
{
	
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    //g.addEdge(1, 2);
   // g.addEdge(2, 0);
    g.addEdge(2, 3);
   // g.addEdge(3, 3);
		
if(g.iscyclic(4))
	cout<<"YES";
else
	cout<<"NO";
	return 0;
}
