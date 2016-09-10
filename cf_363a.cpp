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
	int n;
	cin>>n;
	
	string s;
	cin>>s;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	ll ans=INT_MAX;
	bool flag=false;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='R' and s[i+1]=='L')
		{
			flag=true;
			if(((arr[i+1]-arr[i])/2)<ans)
			{
				ans=(arr[i+1]-arr[i])/2;
			}
		}
	}

	if(flag)
		cout<<ans;
	else
		cout<<"-1";
	return 0;
}
