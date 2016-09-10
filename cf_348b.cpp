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

	string s;
	cin>>s;

	ll arr[n];

ll d;

rep(i,n)
{
	cin>>d;

	if(s[i]=='>')
		arr[i]=d;
	else
		arr[i]=(-1)*d;
}

	bool visited[n];

	memset(visited,false,sizeof(visited));

	ll count=0;

	ll i=0;

	while(1)
	{
		if(visited[i]==false)
		{
			visited[i]=true;
			++count;
		}
		else
		{
			cout<<"INFINITE";
			return 0;
		}
		i=i+arr[i];
		if(i<0 or i>=n)
		{
			cout<<"FINITE";
			return 0;

		}
	}

	

	return 0;
}
