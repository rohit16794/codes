# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bit[100000];
ll arr[100000];
ll n;
void update(int x,int val)
{
	for(;x<=n;x=x+(x&-x))
	{
		bit[x]+=val;
	}
}

ll query(int x)
{
	ll ans=0;

	for(;x>0;x=x-(x&-x))
	{
		ans=ans+bit[x];
	}
	return ans;
}


int main()
{
	//c
	cin>>n;

	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		update(i+1,arr[i]);
	}

	cout<<query(5);
	return 0;
}