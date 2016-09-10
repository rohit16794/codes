#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

#define MOD 1000000007
#define rep(i,n) for(ll i=0;i<n;i++)

ull lookup[101][50001];

ull count_zero(ull n,ull sum)
{
	if(n==0)
		return sum==0;

	if(lookup[n][sum]!=-1)
		return lookup[n][sum];

	ull ans=0;

	for(ll i=0;i<=9;i++)
	{
		if(sum-i>=0)
		ans+=count_zero(n-1,sum-i);
	}
	return lookup[n][sum]=ans;
}

ull count_one(ull n,ull sum)
{
	ull ans=0;
	memset(lookup,-1,sizeof(lookup));

	for(ll i=1;i<=9;i++)
	{
		if(sum-i>=0)
			ans+=count_zero(n-1,sum-i);
	}
	return ans;
}

int main()
{

cout<<count_one(2,5);


	return 0;
}
