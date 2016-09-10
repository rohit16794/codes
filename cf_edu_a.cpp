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
	string s;
	cin>>s;

	char col=s[0];
	char row=s[1];

	int ans=8;

	if(row=='1')
	{
		if(col=='a' or col=='h')
			ans=3;
		else
			ans=5;
	}

	if(row=='8')
	{
		if(col=='a' or col=='h')
			ans=3;
		else
			ans=5;
	}

	if(col=='a')
	{
		if(row=='1' or row=='8')
			ans=3;
		else
			ans=5;
	}


	if(col=='h')
	{
		if(row=='1' or row=='8')
			ans=3;
		else
			ans=5;
	}

	cout<<ans;
	return 0;
}
