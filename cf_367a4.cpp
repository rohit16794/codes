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
	double a,b;
	ll n;

	cin>>a>>b>>n;
	double x,y,v;
	double ans,temp;

	ll i=0;
	while(i<n)
	{
		cin>>x>>y>>v;
		if(i==0)
		{
			ans=sqrt((x-a)*(x-a)+(y-b)*(y-b))/v;
		}
		else
		{
			temp=sqrt((x-a)*(x-a)+(y-b)*(y-b))/v;
			if(temp<ans)
			ans=temp;	
		}
		++i;
	}
	cout<<ans;
	return 0;
}
