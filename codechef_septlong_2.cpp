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
	ll t;
	cin>>t;
	string s;
	ll n;
	bool flag;
	while(t--)
	{
		cin>>s;
		flag=true;
		n=s.length();

		for(int i=0;i<=(n-1)/2;i++)
		{
			if(s[i]!='.' and s[n-1-i]!='.')
			{
				if(s[i]!=s[n-1-i])
					flag=false;
			}
			if(s[i]=='.'and s[n-1-i]=='.')
				{s[i]='a';
					s[n-1-i]='a';
				}
				else
					if(s[i]!='.'and s[n-1-i]=='.')
						s[n-1-i]=s[i];
					else
						if(s[i]=='.'and s[n-1-i]!='.')
							s[i]=s[n-1-i];
		}
		if(flag)
			cout<<s<<"\n";
		else
			cout<<"-1\n";
	}
	return 0;
}
