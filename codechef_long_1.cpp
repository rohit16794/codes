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
	ll t,len;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;

		len=s.length();

		ll one=0,zero=0;

		rep(i,n)
		{
			if(s[i]=='1')
				++one;
			else
				++zero;
		}
		if(abs(zero-one)==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
