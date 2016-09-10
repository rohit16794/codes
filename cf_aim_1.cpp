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
	ll n,b,d;
	cin>>n>>b>>d;

	ll arr[n];

	rep(i,n)
	cin>>arr[i];

	ll sum=0;
	ll count=0;
	rep(i,n)
	{
		if(arr[i]<=b)
		{sum=sum+arr[i];
			if(sum>d)
			{
				sum=0;
				++count;
			}
			
		}
	}
	cout<<count;
	return 0;
}
