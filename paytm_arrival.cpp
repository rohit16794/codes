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
	ll t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;

		ll arr[n],dep[n];
		rep(i,n)
		cin>>arr[i];

		rep(i,n)
		cin>>dep[i];

		sort(arr,arr+n);
		sort(dep,dep+n);

		int i=1,j=0;int guest=1,res=1;

		while(i<n and j<n)
		{
			if(arr[i]<dep[j])
			{
				++guest;
				if(guest>res)
					res=guest;
				++i;
			}
			else
			{
				++j;
				--guest;
			}
		}

		cout<<res<<"\n";

	}
	return 0;
}
