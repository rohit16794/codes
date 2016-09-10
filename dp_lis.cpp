#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int lis(int *arr,int n)
{
	int dp[n];

	for(int i=0;i<n;i++)
		dp[i]=1;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i] and dp[j]+1>dp[i])
			{
				dp[i]=dp[j]+1;
			}
		}
	}

	int max=0;
	for(int i=0;i<n;i++)
	{
		if(dp[i]>max)
			max=dp[i];
	}
	return max;
}

int main()
{
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };

	cout<<lis(arr,8);
	return 0;
}
