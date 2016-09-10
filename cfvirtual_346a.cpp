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
	int n,a,b;
	cin>>n>>a>>b;

	for(int i=0;i<abs(b);i++)
	{
		if(b<0)
		{
			if(a==1)
				a=n;
			else
				a=a-1;
		}
		else
			if(b>0)
		{
			if(a==n)
				a=1;
			else
				a=a+1;
		}
	}
	cout<<a;
	return 0;
}
