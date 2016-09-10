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
	ll n,k;
	cin>>n>>k;
	ll a[n+1];

	for(int i=1;i<=n;i++)
		cin>>a[i];

	ll arr[n+1];


	for(ll i=1;i<=n;i++)
	{
		arr[i]=(i*(i+1)/2);
	}

	//for(int i=1;i<=5;i++)
		//cout<<arr[i]<<" ";
	ll length,first;
	for(ll i=1;i<=n;i++)
	{
		if(arr[i]-i+1<=k)
		{
			length=i;first=arr[i]-i+1;
		}
	}
	//cout<<length<<" "<<first;
	ll ans[length+1];

	for(ll i=1;i<=length;i++)
	{
		ans[i]=first;
		++first;
	}

	for(ll i=1;i<=length;i++)
	{
		if(ans[i]==k)
			cout<<a[i];
	}
	return 0;
}
