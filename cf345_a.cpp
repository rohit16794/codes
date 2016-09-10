#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll a,b;
	cin>>a>>b;
	if(a==b)
	{
		cout<<"0";
		return 0;
	}

	ll ans=0;


	while(1)
	{

		if(a<b)
		{
			a=a+1;
			b=b-2;
			++ans;
		}
		else
		{
			b=b+1;
			a=a-2;
			++ans;
		}
		if(a<=0 or b<=0)
			break;
	}

	cout<<ans;
	return 0;
}