#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int minjumps_dp(int *arr,int n)
{
	int dp[n];
	dp[0]=0;

	if(arr[0]==0|| n==0)
	return -1;

	for(int i=1;i<n;i++)
	{
		dp[i]=INT_MAX;

		for(int j=0;j<i;j++)
		{
			if(j+arr[j]>=i and dp[j]!=INT_MAX)
				{
					dp[i]=min(dp[i],dp[j]+1);
					break;	
				}
		}
	}
	return dp[n-1];
}
int main()
{
	int t,n;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<minjumps_dp(arr,sizeof(arr)/sizeof(arr[0]));
	    
	    
	}
	
	return 0;
}
