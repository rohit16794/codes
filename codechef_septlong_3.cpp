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
	ll t,n,d,ans;

	cin>>t;


	while(t--)
	{
		cin>>n;

		int c[n];
		//cout<<"SCaSC"<<n;
		vector<int> v[n];

		int hash[n][7];

		memset(hash,0,sizeof(hash));

		for(int i=0;i<n;i++)
		{
			cin>>c[i];

			for(int j=0;j<c[i];j++)
			{cin>>d;
			v[i].push_back(d);
			hash[i][d]++;
			}//cout<<v[i][0];

		}
/*
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<7;j++)
				cout<<hash[i][j]<<" ";
			cout<<"\n";
		}*/
		pair<int,int> p[n];
		ll nonzero;
		for(int i=0;i<n;i++)
		{
			ans=0;
			
			while(1)
			{
				nonzero=0;
				for(int j=1;j<=6;j++)
				{
				if(hash[i][j]!=0)
					++nonzero;
				}
				if(nonzero<4)
					break;
				if(nonzero==4)
					ans=ans+1;
				if(nonzero==5)
					ans=ans+2;
				if(nonzero==6)
					ans=ans+4;
				for(int j=1;j<7;j++)
				{
					if(hash[i][j]!=0)
						--hash[i][j];
				}
			}
			ans=ans+c[i];
			p[i]=make_pair(ans,i);
			}
			sort(p,p+n);

			if(p[n-1].first==p[n-2].first)
				cout<<"tie\n";
			else
			{if(p[n-1].second==0)
				cout<<"chef\n";
			else
				cout<<p[n-1].second+1<<"\n";
			}
		
	}
	return 0;
}
