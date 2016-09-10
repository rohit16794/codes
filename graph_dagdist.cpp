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
	void topological_sort(int v,bool visited[],stack<int> &s) ;
	void shortest_path(int source);
};

Graph :: Graph(int v)
{
	this->v=v;
	adj= new list <PII> [v];
}

void Graph:: addEdge(int v,int w,int weight)
{
	adj[v].push_back(make_pair(w,weight));
	//adj[w].push_back(make_pair(v,weight));
}

void Graph ::topological_sort(int v,bool visited[],stack<int> &s)
{
	visited[v]=true;
	list<PII> :: iterator it;
	//cout<<v<<" ";
	for(it=adj[v].begin();it!=adj[v].end();it++)
	{

		if(!visited[(*it).first])
			topological_sort((*it).first,visited,s);
	}
	s.push(v);
}

void Graph :: shortest_path(int source)
{
	int dist[v];
	bool visited[v];

	for(int i=0;i<v;i++)
	{
		dist[i]=INT_MAX;
		visited[i]=false;
	}

	dist[source]=0;

	stack<int> s;

	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{		
			topological_sort(i,visited,s);
		}	
	}
	/*while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}*/

while(!s.empty())
	{
		int u=s.top();
		//cout<<u<<" ";
		s.pop();

		list<PII> :: iterator it;

	for(it=adj[u].begin();it!=adj[u].end();it++)
	{
			int v=(*it).first;
			
			int weight=(*it).second;
			//cout<<v<<" "<<weight<<"\n";
			if(dist[u]!=INT_MAX and dist[u]+weight<dist[v])
			{
				dist[v]=dist[u]+weight;
			}
		}
	}

	
}




int main()
{
	 Graph g(6);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);
 
 	g.shortest_path(1);

	return 0;
}
