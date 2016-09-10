#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;

	//ll arr[n+1];
	vector<ll> v;
	rep(i,n+1)
	v.push_back(i);
	//cout<<v[n];

	ll first,second;
	//if(b==c)
	//	first=n;
	//else
	//{
		first=0;
		for(ll i=1;i<=n;i++)
		{
			if(binary_search(v.begin(),v.end(),((c-b)+i)))
				++first;
		}
	//}
	//if(a==d)
	//.//{
	//	second=n;
	//}
	//else
	//{
		second=0;

		for(ll i=1;i<=n;i++)
		{
			if(binary_search(v.begin(),v.end(),((d-a)+i)))
				++second;	
		}
		ll third=0;

		for(ll i=1;i<=n;i++)
		{
			if(binary_search(v.begin(),v.end(),((c-b)+i)))
				++third;
		}
	//}
			cout<<first*second;//*third;
//cout<<first*second;
	return 0;
}
