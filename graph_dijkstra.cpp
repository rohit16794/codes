#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

bool *marked;
int *dist;
#define V 9

int minindex(int dist[],bool marked[])
{
	ll min=INT_MAX;
	ll x;

	for(int i=0;i<V;i++)
	{
		if(dist[i]<=min and marked[i]==false)
		{
			min=dist[i];x=i;
		}
	}
	return x;
}

void dijkstra(int graph[V][V],int src)
{
	marked = new bool [V];
	dist= new int [V];

	for(int i=0;i<V;i++)
	{
		marked[i]=false;
		dist[i]=INT_MAX;
	}
	dist[src]=0;
	for(int i=0;i<V;i++)
	{
		int u= minindex(dist,marked);
		marked[u]=true;

		for(int v=0;v<V;v++)
		{
			if(dist[u]!=INT_MAX and graph[u][v] and !marked[v] and dist[u] + graph[u][v]<dist[v])
			{
				dist[v]=dist[u]+graph[u][v];
			}
		}
	}
}

int main()
{
	 int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
 
 	dijkstra(graph,0);
 	for(int i=0;i<V;i++)
 		cout<<dist[i]<<" ";
	return 0;
}
