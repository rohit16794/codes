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

		int x=0,y=0;

		for(int i=0;iNlen;i++)
		{
			if(s[i]=='E')
				++x;
			if(s[i]=='W')
				--x;
			if(s[i]=='N')
				++y;
			if(s[i]=='S')
				--y;	
		}
		if(x!=0 and y!=0)
		{
			if(x>0 and y>0)
			{
				while(x!=0)
				{
				cout<<"E";
				--x;
				}
				while(y!=0)
				{
					cout<<"N";
					--y;
				}
			}

		if(x<0 and y>0)
		{
			while(y!=0)
			{
				cout<<"N";
				--y;
			}
			while(x!=0)
			{
					cout<<"W";
					++x;
			}
		}

		if(x<0 and y< 0)
		{
			while(y!=0)
			{
				cout<<"S";
				++y;
			}
			while(x!=0)
			{
				cout<<"W";
				++x;
			}
		}	

		if(x>0 and y>0)
		{
			while(x!=0)
			{
				cout<<"E";
				--x;
			}
			while(y!=0)
			{
				cout<<"S";
				--y;
			}
		}
	} // loop for x and y not equal to 0.
	else
	{
		if(x!=0 and y==0)
		{
			if(x>0)
			{
				while(x!=0)
				{
					cout<<"E";--x;
				}
			}
			else
			{
				while(x!=0)
				{
					cout<<"W";
					++x;
				}
			}
		}
		else
		{
			if(y>0)
			{
				while(y!=0)
				{
					cout<<"N";
					--y;
				}
			}
			else
			{
				while(y!=0)
				{
					cout<<"S";
					++y;
				}
			}
		}


	}	
			}// test case loop


	return 0;
}
