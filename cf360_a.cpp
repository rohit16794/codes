#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,d;
	cin>>n>>d;

	string s;
	bool flag;
	ll maxi=-1;
	ll ans=0;
	while(d--)
	{
		cin>>s;
		flag=true;

		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
				flag=false;
		}
		
			if(flag==false)
			{
				++ans;
				//cout<<ans<<" ";
			}
			maxi=max(maxi,ans);
			if(flag)
			{
				
				//cout<<ans<<" ";
				ans=0;
			}
		
	}
	if(maxi!=-1)
	cout<<maxi;
	else
		cout<<ans;
	return 0;
}
