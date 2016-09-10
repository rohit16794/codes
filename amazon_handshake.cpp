#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

ll handshake(ll n)
{
	ll catalan[n+1];
	catalan[0]=1;
	catalan[1]=1;

	for(int i=2;i<=n;i++)
	{
		catalan[i]=0;

		for(int j=0;j<i;j++)
		{
			catalan[i]+=catalan[j]*catalan[i-j-1];
		}
	}
	return catalan[n];
}
int main()
{
	ll t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		cout<<handshake(n/2)<<"\n";

	}
	return 0;
}
