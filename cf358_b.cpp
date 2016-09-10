#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;

	ll arr[n];

	rep(i,n)
	cin>>arr[i];

	sort(arr,arr+n);

	for(ll i=0;i<n-1;i++)
	{
		if(arr[i+1]-arr[i]>1)
		{
			arr[i+1]=(arr[i+1]-arr[i])-1;
		}
	}
	cout<<arr[n-1]+1;
	return 0;
}
