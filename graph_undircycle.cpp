// This is an O(ElogV) algorithm.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

class Graph
{
	int v;
	int *arr;
public:
	Graph(int v);
	ll root(int i);
	void set_union(int a,int b);
	bool find(int a,int b);
};

Graph :: Graph(int v)
{
	this->v=v;
	arr = new int [v+1];

	for(int i=0;i<=v;i++)
		arr[i]=i;
}

ll Graph :: root(int i)
{
	while(arr[i]!=i)
	{
		arr[i]=arr[arr[i]];
		i=arr[i];
	}
	return i;
}

void Graph :: set_union(int a,int b)
{
	ll root_a=root(a);
	ll root_b=root(b);

	arr[root_a]=root_b;
}

bool Graph :: find(int a,int b)
{
	if(root(a)==root(b))
		return true;
	else
		return false;
}
int main()
{
	Graph g(3);
	int edges;
	cin>>edges;

	int x,y;

	pair<int,int> p[edges];

	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		p[i]=make_pair(x,y);
	}

	for(int i=0;i<edges;i++)
	{
		x=p[i].first;
		y=p[i].second;

		if(g.root(x)==g.root(y))
		{
			cout<<"cycle exists";
			return 0;
		}
		else
		{
			g.set_union(x,y);
		}
	}
	cout<<"no cycle exists";

	return 0;
}
