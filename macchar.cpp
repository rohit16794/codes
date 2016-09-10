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
	int t;
	cin>>t;

	string s;

	while(t--)
	{
		cin>>s;
		int len=s.length();

		int arr[26]={0};

		for(int i=0;i<len;i++)
		{
			arr[s[i]-97]++;
		}

		int maxcount=0;

		for(int i=0;i<26;i++)
		{
			maxcount=max(maxcount,arr[i]);
		}
		int ans;

		for(int i=0;i<26;i++)
		{
			if(arr[i]==maxcount)
			{
				ans=i;break;
			}
		}
		cout<<char(ans+97)<<"\n";
	}
	return 0;
}
