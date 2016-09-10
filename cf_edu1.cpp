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

	ll arr[n];
	rep(i,n)
	cin>>arr[i];
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		if(arr[i]==0)
			++count;
	}
	//cout<<count;
	if(n==1)
	{
		if(arr[0]==1)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
	{
		if(count<=1)// || (arr[0]==1 and n==1))
		cout<<"YES";
		else
		cout<<"NO"; 

	}
	
	return 0;
}
