#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check[100000];
ll arr[100000];
ll size[100000];

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

	if(root_a!=root_b)
	{
		arr[root_a]=arr[root_b];

		size[root_b]+=size[root_a];
		size[root_a]=size[root_b];
	}
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll x,y;
	for(ll i=0;i<=n;i++)
	{
		size[i]=1;
		arr[i]=i;
		check[i]=0;
	}

	while(m--)
	{
		cin>>x>>y;
		vector<ll> v;
		set_union(x,y);
		for(ll i=0;i<=n;i++)
			check[i]=0;

		for(ll i=1;i<=n;i++)
		{
			if(check[root(i)]==0)
			{
				v.push_back(size[root(i)]);

				check[root(i)]=1;
			}
			//cout<<size[i]<<" "<<i<<" "<<"\n";
		}
		//for(ll i=1;i<=n;i++)
			//cout<<size[i]<<" ";
		sort(v.begin(),v.end());

		vector<ll> :: iterator it;
		for(it=v.begin();it!=v.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<"\n";
	}

	return 0;
}