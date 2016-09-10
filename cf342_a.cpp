#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,a,b,c;
	
	cin>>n>>a>>b>>c;

	ll res_a=a;
	ll res_b=b-c;

	ll sum=n;
	if(sum>=res_a || sum>=res_b)
	{
		if(res_a<=res_b)
	{
		cout<<floor(n/a);//cout<<"xsasx0";
	}
	else
		if(res_b<res_a)
	{
		cout<<floor((n-b)/res_b);
	}

	}
	else
		cout<<"0";
	
	return 0;


}
