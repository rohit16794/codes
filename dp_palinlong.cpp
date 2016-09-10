#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

void long_palin(string str)
{
	ll n=str.length();

	bool dp[n][n];

	memset(dp,0,sizeof(dp));

	int start,maxsize;

	for(int i=0;i<n;i++)
		dp[i][i]=true;
	maxsize=1;
	start=0;


	for(int i=0;i<n-1;i++)
	{
		if(str[i]==str[i+1])
		{
			start=i;
			dp[i][i+1]=true;
			//cout<<start<<" ";
			maxsize=2;
		}
	}
	//cout<<n;
	for(int k=3;k<=n;k++)
	{
		for(int i=0;i<n-k+1;i++)
		{
			int j=i+k-1;

			if(str[i]==str[j] and dp[i+1][j-1])
			{
				dp[i][j]=true;

				if(k>maxsize)
				{
					//cout<<"rohit";
					start=i;
					maxsize=k;
				}
			}
		}
	}
	//cout<<start<<" "<<maxsize;
	for(int i=start;i<start+maxsize;i++)
		cout<<str[i];
	cout<<"\n";

}

int main()
{
	string s="forgeeksskeegfor";
	long_palin(s);
	//cout<<s;
	return 0;
}
