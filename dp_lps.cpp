#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

ll lps_dp(char *seq,ll n)
{
	ll dp[n][n];

	for(ll i=0;i<n;i++)
		dp[i][i]=1;

	for(ll cl=2;cl<=n;cl++)
	{
		for(ll i=0;i<n-cl+1;i++)
		{
			ll j=i+cl-1;// points to the last element of the chain. 

			if(seq[i]==seq[j] and cl==2)
				dp[i][j]=2;
			else
				if(seq[i]==seq[j])
					dp[i][j]=dp[i+1][j-1]+2;
				else
					dp[i][j]=max(dp[i+1][j],dp[i][j-1]);

		}
	}
	return dp[0][n-1];
}

int main()
{
	char seq[]="GEEKS FOR GEEKS";

	ll n=strlen(seq);

	cout<<lps_dp(seq,n);

	return 0;
}
