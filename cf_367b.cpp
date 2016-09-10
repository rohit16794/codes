#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

ll binary_search(ll arr[],ll lo,ll hi, ll key)
{
	ll mid;
	ll ans=-1;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		if(key<arr[mid])
		{
			hi=mid-1;
		}
		else
		{
			ans=mid;
			lo=mid+1;
		}
	}
return ans;
}

int main()
{
	ll n;
	cin>>n;
	ll arr[n];

	rep(i,n)
	cin>>arr[i];

	//cout<<"rohit";

	sort(arr,arr+n);
	
	ll q;
	cin>>q;
	//cout<<q;

	ll d;

	
	ll ans;
	while(q--)
	{
		cin>>d;
		ll lo=0,hi=n-1;
		ans=binary_search(arr,lo,hi,d);
		if(ans==-1)
			cout<<"0\n";
		else
			cout<<ans+1<<"\n";
	}

	return 0;
}
