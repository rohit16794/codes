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
	ll n;
	cin>>n;

	ll arr[n][n];
	rep(i,n)
	{
		rep(j,n)
		{
			cin>>arr[i][j];
		}
	}
	if(n!=1)
	{
	ll row[n],col[n];
	ll i,j;
	for(i=0;i<n;i++)
	{	
		row[i]=0;
		for( j=0;j<n;j++)
		{
			row[i]+=arr[i][j];
		}
	}

	for(i=0;i<n;i++)
	{	
		col[i]=0;
		for( j=0;j<n;j++)
		{
			col[i]+=arr[j][i];
		}
	}
	ll diag=0;
	ll offdiag=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			diag+=arr[i][j];
		}
		if((i+j)==(n-1))
		{
			offdiag+=arr[i][j];
		}
	}

	ll ans;
	
	

	for( i=1;i<n;i++)
	{
		if(row[i]!=row[i-1])
		{
			ans=abs(row[i]-row[i-1]);
		}
	}

	for( j=1;j<n;j++)
	{
		if(col[j]!=col[j-1])
		{
			ans=abs(col[j]-col[j-1]);
		}
	}

	sort(row,row+n);
	sort(col,col+n);
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(row[i]!=col[i])
			flag=false;
	}

if(flag)
	cout<<ans;
else
	cout<<"-1";
}
else
{
	if(arr[0][0]==0)
		cout<<"1";
	else
		cout<<arr[0][0];
}
	return 0;

}
