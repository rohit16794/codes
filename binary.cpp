#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1000000];
ll search(ll val,ll lo,ll hi)
{
	ll mid=lo+(hi-lo)/2;

	if(lo<=hi)
	{
		if(arr[mid]==val)
			return mid;
		else
			if(val<arr[mid])
				return search(val,lo,mid-1);
			else
				return search(val,mid+1,hi);
	}
	return -1;
}
int main()
{
	ll n,q;
	cin>>n;

	//ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);
	cin>>q;
	ll x;

	while(q--)
	{
		cin>>x;
		cout<<search(x,0,n-1)+1;cout<<"\n";
	}

	return 0;
}