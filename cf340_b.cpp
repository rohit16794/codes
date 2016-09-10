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

	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			++count;
	}
	int ans=0;
	if(count==0)
		cout<<"0";
	else
		if(count==1 or count==n)
			cout<<"1";
		else
		{
			

			for(int i=0;i<n-1;i++)
			{
				if(arr[i]==0)
				{
					if(arr[i+1]==1)
						++ans;
				}
				if(arr[i]==1)
				{
					if(arr[i+1]==0)
						++ans;
				}
			}
			cout<<ans;
		}
	return 0;
}
