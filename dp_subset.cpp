#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int subset_sum(int *set,int n,int sum)
{
	int dp[sum+1][n+1];

	for(int i=0;i<=sum;i++)
		dp[i][0]=0;

	for(int j=0;j<=n;j++)
		dp[0][j]=1;

	for(int i=1;i<=sum;i++)
	{
		for(int j=1;j<=n;j++)
		{
			


		if(i>=set[j-1])
		{
			dp[i][j]=dp[i][j-1]|| dp[i-set[j-1]][j-1];
		}
		else
			dp[i][j]=dp[i][j-1];
	}
		
	}
	return dp[sum][n];
}

int main()
{
	 int set[] = {3, 34, 4, 12, 5, 2};
  int sum = 555;
  int n = sizeof(set)/sizeof(set[0]);

  cout<<subset_sum(set,n,sum);
	return 0;
}
