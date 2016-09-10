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
	list<int> *rev;

public:
	Graph(int v);
	void addEdge(int v,int w);
	void reverse();
	bool strong();
	void dfs(int i,bool visited[]);
	void dfs_rev(int i,bool visited[]);
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

void Graph :: reverse()
{
	rev = new list<int> [v];
	for(int i=0;i<v;i++)
	{
		for(list<int> :: iterator it=adj[i].begin();it!=adj[i].end();it++)
		{
			rev[*it].push_back(i);
		}
	}
/*
	for(int i=0;i<v;i++)
	{
		for(list<int> :: iterator it=rev[i].begin();it!=rev[i].end();it++)
		{
			cout<<i<<" "<<(*it)<<" "<<"\n";
		}
	}*/
}

void Graph :: dfs(int i,bool visited[])
{
	visited[i]=true;

	for(list<int> :: iterator it=adj[i].begin();it!=adj[i].end();it++)
	{
		if(!visited[*it])
			dfs(*it,visited);
	}
}

void Graph :: dfs_rev(int i,bool visited[])
{
	visited[i]=true;
	//cout<<i<<" ";

	/*for(int t=0;t<v;t++)
	{
		for(list<int> :: iterator it=rev[t].begin();it!=rev[t].end();it++)
		{
			cout<<t<<" "<<(*it)<<" "<<"\n";
		}
	}*/
		list<int> :: iterator it;
		//cout<<rev[i].size()<<" ";
	for(it=rev[i].begin();it!=rev[i].end();it++)
	{
		//cout<<*it;
		//cout<<visited[*it];
		if(!visited[*it])
		{
			//cout<<*it;

			dfs_rev(*it,visited);
		}
	}
}



bool Graph :: strong()
{
	bool visited[v];

	for(int i=0;i<v;i++)
		visited[i]=false;

	dfs(0,visited);


	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
			{	//cout<<"first";
				return false;}
	}

for(int i=0;i<v;i++)
		visited[i]=false;

	reverse();
	
	dfs_rev(0,visited);

	for(int i=0;i<v;i++);
		//cout<<visited[i]<<" ";

	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
			{//cout<<"sec";
				return false;
	}
	}

	return true;
	}

int main()
{
	Graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 0);
    g1.addEdge(2, 4);
    g1.addEdge(4, 2);

   if(g1.strong())
   	cout<<"YES"<<"\n";
   else
   	cout<<"NO"<<"\n";
   Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.addEdge(2, 3);
    if(g2.strong())
    	cout<<"YES";
    else
    	cout<<"NO";
	
	return 0;
}
