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
	ll root_a= root(a);
	ll root_b=root(b);

	if(root_a==root_b)
		return ;
	else
	{
		arr[root_a]=root_b;
	}
}



int main()
{
	ll t,n,m,x,y;
	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		pair<ll,ll> p[m];
		
		for(ll i=0;i<=n;i++)
		arr[i]=i;

		for(ll i=0;i<m;i++)
		{
			cin>>x>>y;
			p[i]=make_pair(x,y);
		}
		ll edge[n-1];
		for(ll i=0;i<n-1;i++)
		{
			cin>>edge[i];
		}
		ll flag=1;
		for(ll i=0;i<n-1;i++)
		{
			x=p[edge[i]-1].first;
			y=p[edge[i]-1].second;

			if(root(x)==root(y))
			{
				flag=0;break;
			}
			else
			{
				set_union(x,y);
			}
		}
		if(flag)
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}