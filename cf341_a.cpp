#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;

	ll arr[n];

	rep(i,n)
	cin>>arr[i];

	ll sum=0;
	sort(arr,arr+n);
	rep(i,n)
	{
		sum+=arr[i];
	}
	
	std::vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
			v.push_back(arr[i]);
	}

	sort(v.begin(),v.end());
	if(v.size()!=0 and sum%2!=0)
		sum=sum-v[0];

	 cout<<sum;

	return 0;
}
