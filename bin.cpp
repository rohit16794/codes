#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[1000000];
ll check[100000];
ll sum,n,m;

ll search(ll lo,ll hi)
{
	ll mid=lo + (hi-lo)/2;
	if(lo<=hi)
	{
		if(ceil(sum/mid)<=m)
		{	
		return search(lo,mid-1);
		}
	else
		{
		if(ceil((sum/(mid+1))<=m))
			return mid+1;
		else
			return search(mid+1,hi);
		}
	}
	return -1;
}

int main()
{
	//ll n,m,sum;
	cin>>n>>m;

	sum=0;

	for(ll i=0;i<n;i++)
	{
			cin>>arr[i];
			sum+=arr[i];
	}

	cout<<search(1,sum);

	return 0;
}