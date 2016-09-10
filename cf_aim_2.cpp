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
	ll n,a;
	cin>>n>>a;
	ll arr[n];
	rep(i,n)
	{
		cin>>arr[i];
	}

	pair<ll,ll> p[n];
	ll diff;
	rep(i,n)
	{
		diff=abs(arr[i]-a);
		p[i]=make_pair(diff,i);
	}
	sort(p,p+n);
	ll ans=0;
	ll curr=a;
	for(int i=0;i<n-1;i++)
	{
		ans=ans+abs(arr[p[i].second]-curr);
		curr=arr[p[i].second];
	}
	cout<<ans;
	return 0;
}
