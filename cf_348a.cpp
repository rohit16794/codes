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

	ll ans;
	if(n%3==0)
		ans=(n/3)*2;
	else
		ans=((n/3)*2)+1;

	cout<<ans;
	return 0;
}
