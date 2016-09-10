#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[50000];

ll root(ll i)
{
	while(i!=arr[i])
	{
		arr[i]=arr[arr[i]];
		i=arr[i];
	}
	return i;
}

void set_union(ll a,ll b)
{
	ll root_a=root(a);
	ll root_b=root(b);

	if(root_a==root_b)
		return;
	else
	{
		arr[root_a]=root_b;
	}
}

ll kruskal(pair<ll,pair<ll,ll> > p[],ll edges)
{
	ll mincost=1;
	ll x,y;

	for(ll i=0;i<edges;i++)
	{
		x=p[i].second.first;
		y=p[i].second.second;
		//cout<<root(x)<<" "<<root(y);
		//cout<<"\n";
		if(root(x)!=root(y))
		{
			mincost=(mincost%1000000007*p[i].first%1000000007)%1000000007;
			set_union(x,y);
		}
	}
	return mincost;
}

int main()
{
	ll t,n,m,a,b,weight;

	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		pair<ll,pair<ll,ll> > p[m];

		for(ll i=0;i<=n;i++)
			arr[i]=i;

		for(ll i=0;i<m;i++)
		{
			cin>>a>>b>>weight;
			p[i]=make_pair(weight,make_pair(a,b));
		}
		sort(p,p+m);
		cout<<kruskal(p,m)<<"\n";
	}
	return 0;
}