#include <bits/stdc++.h>
using namespace std;
 
long long c;
int *visited;
class Graph
{
	int v;
	
vector<int> *adj;
public:
	Graph(int v);
	void addedge(int v,int w);
	void dfs(int s);
	int check(int i);
};
 
Graph:: Graph(int v)
{
	this->v=v;
	adj=new vector<int> [v];
}
 
void Graph:: addedge(int v,int w)
{
//	cout<<"sacas";
	adj[v].push_back(w);
	adj[w].push_back(v);
}
 
void Graph:: dfs(int s)
{
	//visited = new int [10005];
	stack <int> q;
	q.push(s);
	//visited[s]=1;
	
	
	while(!q.empty())
	{
		int p=q.top();
	q.pop();
	for(int i=0;i<adj[p].size();i++)
	{
		//cout<<"dassd";
		if(visited[adj[p][i]]==0)
		{
			c++;
			if(visited[p]==0)
			{
				visited[p]=1;
				if(visited[p]!=visited[adj[p][i]])
				++c;
			}
			//cout<<"Node:"<<adj[p][i];
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
 
	long long t,e,x,y;
	cin>>t;
	while(t--)
	{
	//	adj=new vector <int> [10005];
 
		visited= new int [10005];
		for(int i=0;i<10005;i++)
			visited[i]=0;
 
		cin>>e;
		Graph g(10005);
		while(e--)
		{
			cin>>x>>y;
			g.addedge(x,y);
		//	g.addedge(y,x);
		}
		c=0;
		for(int i=1;i<10005;i++)
		{	
		//	cout<<g.check(i)<<"\n";
			if(g.check(i)==0)
				{
					g.dfs(i);
						//cout<<"cac";
				}
		}
	cout<<c<<"\n";
	}
	return 0;
}