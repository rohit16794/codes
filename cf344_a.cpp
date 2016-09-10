#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;

	ll a[n],b[n];

	rep(i,n)
	cin>>a[i];

	rep(i,n)
	cin>>b[i];

	ll first=a[0];
	ll second=b[0];

	for(ll i=1;i<n;i++)
	{
		first=first | a[i];
		second=second | b[i];
	}
	
	cout<<first+second;

	return 0;
}
