#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;

	ll arr[n][m];

	

	pair<ll,ll> row[n+1],col[m+1];

	for(ll i=1;i<=n;i++)
	{
		row[i]=make_pair(0,0);
	}
	for(ll i=1;i<=m;i++)
	{
		col[i]=make_pair(0,0);
	}

	ll choice,x,y;

	for(ll i=1;i<=k;i++)
	{
		cin>>choice>>x>>y;
		//cout<<"sc";
		if(choice==1)
		{
			row[x]=make_pair(y,i);
		}
		else
		{
			col[x]=make_pair(y,i);
		}
	}

	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			if(row[i].second>col[j].second)
				cout<<row[i].first<<" ";
			else
				cout<<col[j].first<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
