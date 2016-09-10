#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void set_union(ll a,ll b)
{
	ll root_a=root(arr,a);
	ll root_b=root(arr,b);

	if(root_a!=root_b)
	{
		arr[root_a]=root_b;
	}
}

ll root(ll *arr,ll i)
{
	while(i!=arr[i])
	{
		arr[i]=arr[arr[i]];
		i=arr[i];
	}
	return i;
}

ll kruskal(pair<ll,pair<ll,ll> > p[],ll n)
{
	ll min_cost=0;
	ll current,a,b;
	for(ll i=0;i<n;i++)
	{
		current=p[i].first;
		a=p[i].second.first;
		b=p[i].second.first;
		if(root(a)!=root(b))
		{
			set_union(a,b);
			min_cost+=current;
		}
	}

return min_cost;
}

int main()
{
	
	ll arr[100];

	for(ll i=0;i<100;i++)
		arr[i]=i;

	pair<ll,pair<ll,ll> > p[6];
	ll x,y,cost;
	for(ll i=0;i<5;i++)
	{
		cin>>x>>y>>cost;
		p[i]=make_pair(cost,make_pair(x,y));
	}

	cout<<kruskal(p,6);

	return 0;
}