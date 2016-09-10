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
	string s;
	cin>>n;
	map<string,ll> mp;
	while(n--)
	{
		cin>>s;
		if(mp[s]==0)
		{
			cout<<"ADDED\n";
			mp[s]=1;
		}
		else
			cout<<"REDUNDANT\n";

	}


	return 0;
}
