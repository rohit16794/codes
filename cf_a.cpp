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
	int n;
	cin>>n;

	char arr[n][5];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
			cin>>arr[i][j];
	}
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]=='O' and arr[i][1]=='O')
		{
			flag=true;
			arr[i][0]='+';
			arr[i][1]='+';
			break;
		}
		if(arr[i][3]=='O'and arr[i][4]=='O')
		{
			flag=true;
			arr[i][3]='+';
			arr[i][4]='+';
			break;
		}
	}
	if(flag)
{		cout<<"YES\n";
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<arr[i][j];
		}
		cout<<"\n";
	}	
}
	else
		cout<<"NO\n";



	return 0;
}
