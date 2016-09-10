#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,x;
	char c;

	cin>>n>>x;
	ll curr;
	ll ans=0;
	while(n--)
	{
		cin>>c>>curr;

		if(c=='+')
		{
			x=x+curr;
			//cout<<x<<" ";
		}
		else
		{
			if(x-curr>=0)
				{x=x-curr;
				//	cout<<x<<" ";
				}
			else
			{	++ans;
				//cout<<x<<" ";
			}
		}
	}

	cout<<x<<" "<<ans;
	return 0;
}
