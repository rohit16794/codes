#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll n,q;
ll arr[1000000];
ll bit[1000000];
void update(ll x,ll val)
{
	while(x<=n)
	{
		bit[x]+=val;
		x+=(x&-x);
	}
}
 
ll query(ll x)
{
	ll ans=0;
	while(x>0)
	{
		ans+=bit[x];
		x-=(x&-x);
	}
	return ans;
}
 
int func(ll x)
{
	if(x<0)
	return 0;
	if(x==0)
		return 1;

	ll p=x%10;

	ll g;
	while(x>0)
	{
		g=x%10;
		x=x/10;
	}
	return (g==p);
}
int main()
{
	cin>>n>>q;
	ll choice ,l,r,K;
 
	for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(func(arr[i]))
			{
				update(i+1,1);
			}
		}
 
		while(q--)
		{
			cin>>choice;
			if(choice==1)
			{
				cin>>l>>r;
				cout<<query(r)-query(l-1)<<"\n";
			}
			else
			{
				cin>>l>>K;
				
				update(l,-func(K));
				arr[l-1]=K;
				update(l,func(K));	


				//for(ll i=0;i<=n;i++)
				//	cout<<bit[i]<<" ";
 
				//cout<<"\n";
			}
			//cout<<func(2000);
		}
		
	return 0;
}