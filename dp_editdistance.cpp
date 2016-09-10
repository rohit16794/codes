#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int edit_distanceDP(string s1,string s2,ll m,ll n)
{
	int dp[m+1][n+1];

	for(ll i=0;i<=m;i++)
	{
		for(ll j=0;j<=n;j++)
		{
			if(i==0)
				dp[i][j]=j;
			else
				if(j==0)
					dp[i][j]=i;
				else
					if(s1[i-1]==s2[j-1])
					{
						dp[i][j]=dp[i-1][j-1];
					}
					else
						dp[i][j]=1+min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);

		}
	}
return dp[m][n];
}

int main()
{

	string str1 = "sunday";
    string str2 = "saturday";
 
 	cout<<edit_distanceDP(str1,str2,str1.length(),str2.length());	
	return 0;
}
