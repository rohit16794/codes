#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[1000000];
ll n;

ll root(ll x)
{
	while(arr[x]!=x)
	{
		arr[x]=arr[arr[x]];
		x=arr[x];
	}
	return x;
}

void set_union(ll x,ll y)
{
	ll root_x=root(x);
	ll root_y=root(y);

	if(root_x!=root_y)
		arr[root_x]=root_y;
	else
		return ;
}

ll kruskal(pair<ll,pair<ll,ll> > p[])
{
	ll current,mincost=0;
	ll x,y;
	for(ll i=0;i<n;i++)
	{
		current=p[i].first;
		x=p[i].second.first;
		y=p[i].second.second;

		if(root(x)!=root(y))
		{
			mincost+=current;
			set_union(x,y);
		}
	}
	return mincost;
}
int main()
{
	cin>>n;

	for(int i=0;i<=5;i++)
	{
		arr[i]=i;
	}

	ll a,b,c;
	pair<ll,pair<ll,ll> > p[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		p[i]=make_pair(a,make_pair(b,c));
	}
	sort(p,p+n);

	cout<<kruskal(p);


	return 0;
}