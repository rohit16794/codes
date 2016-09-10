#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PII;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

vector<PII> *adj;
bool *marked;

ll prim(ll x)
{
	ll mincost=0;

	priority_queue<PII,vector<PII>,greater<PII> > Q;
	Q.push(make_pair(0,x));
	PII p;

	while(!Q.empty())
	{
		p=Q.top();
		Q.pop();

		ll a= p.second;
		if(marked[a]==true)
			continue;
		mincost+=p.first;
		marked[a]=true;
		ll y;
		for(int i=0;i<adj[a].size();i++)
		{
			y=adj[a][i].second;
			if(marked[y]==false)
				Q.push(adj[a][i]);
		}
	}
return mincost;

}
int main()
{
	ll nodes,edges;
	cin>>nodes>>edges;
	
	adj = new vector<PII> [nodes+1];
	marked = new bool [nodes+1];
	memset(marked,false,sizeof(marked));

	ll weight,x,y;

	while(edges--)
	{
		cin>>weight>>x>>y;
		adj[x].push_back(make_pair(weight,y));
		adj[y].push_back(make_pair(weight,x));
	}
	cout<<prim(1);


	return 0;
}
