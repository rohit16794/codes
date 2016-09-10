#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)
#define MOD 1000000007
ll binary(ll n)
{
	ll a[n+1],b[n+1];

	a[1]=b[1]=1;

	for(ll i=2;i<=n;i++)
	{
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
	}
	return (a[n]%MOD + b[n]%MOD)%MOD;
}

int main()
{
	ll t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		cout<<binary(n)<<"\n";
	}

	return 0;
}
