#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
int arr[1005][1005];
int main()
{
	ll n;
	cin>>n;
	//cout<<n;;
	
	memset(arr,0,sizeof(arr));
	ll x,y;
	//ll i;
	
	//cout<<n;
	pair<ll,ll>p[n];

	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		arr[x][y]=2;
		//p[i]=make_pair(x,y);
	}
/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<arr[i][j]<<" ";

		cout<<"\n";
		//arr[p[i].first][p[i].second]=2;
	}*/
	

	//cout<<i;
	//cout<<"roht";
	ll ans=0;
	ll prim,off;
	

	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<=1000;j++)
		{
			prim=0;off=0;
			if(arr[i][j]>0)
			{
				int r,c;
				r=i+1;c=j+1;
				--arr[i][j];
				
				++prim;
				
				while(r<=1000 and c<=1000)
				{
					//cout<<"csasc";
					if(arr[r][c]==2)
					{
						++prim;
						//cout<<prim<<" ";
						cout<<r<<" "<<c<<"\n";
						--arr[r][c];
					}
					++r;++c;
				}

				ans+=((prim*(prim-1))/2);

				r=i+1;c=j-1;
				+off;
				while(r<=1000 and c>=1)
				{
					if(arr[r][c]==1)
					{
						++off;
						--arr[r][c];
						
					}
					++r;
						--c;
				}
				ans+=((off*(off-1))/2);
			}
		}
	}
	cout<<ans;

	return 0;
}
