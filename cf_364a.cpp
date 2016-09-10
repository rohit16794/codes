#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

int main()
{
	ll n;
	cin>>n;

	ll arr[n];

	rep(i,n)
	cin>>arr[i];

	ll mini,maxi;

	mini=arr[0];
	maxi=arr[0];

	rep(i,n)
	{
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}

	ll sum=mini+maxi;
	ll first;
	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
				{cout<<i+1<<" "<<j+1<<"\n";
			arr[i]=0;arr[j]=0;
		}
		}
	}
	return 0;
}
