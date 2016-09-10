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
	int n,m;
	cin>>n>>m;

	char arr[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}

	bool flag=true;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
				flag=false;
		}
	}
	if(flag)
	{
		cout<<"#Black&White";
	}
	else
		cout<<"#Color";
	return 0;
}
