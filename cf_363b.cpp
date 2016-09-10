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
	int count =0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='*')
				++count;
		}
	}

	int row[n],col[m];

	memset(row,0,sizeof(row));
	memset(col,0,sizeof(col));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='*')
				++row[i];
		}
	}

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j][i]=='*')
				++col[i];
		}
	}	
	bool flag=false;
	
int c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='*')
				c=row[i]+col[j]-1;
				else
					c=row[i]+col[j];
			if(c==count)
			{
				cout<<"YES\n";
				cout<<(i+1)<<" "<<(j+1);
				flag=true;
				break;
			}
			
		}
		if(flag)
				break;
	}

	if(flag==false)
		cout<<"NO";

	return 0;
}
