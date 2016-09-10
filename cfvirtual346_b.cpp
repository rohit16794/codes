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
	ll n,m;
	cin>>n>>m;

	pair<ll,pair<ll,string> > p[n];

	ll marks;ll region;string name;

	for(ll i=0;i<n;i++)
	{
		cin>>name>>region>>marks;

		p[i]= make_pair(-1*region,make_pair(-1*marks,name));
	}

	sort(p,p+n);

	bool visited[m+1];
	for(ll i=0;i<=m;i++)
		visited[i]=false;
	ll fir,sec,third;
	pair<string,string> d[m+1];
	for(int i=0;i<n-1;i++)
	{
		fir=p[i].first;
		if(i+1<n)
		sec=p[i+1].first;
		if(i+2<n)
		third=p[i+2].first;

		if(!visited[-1*fir])
		{//cout<<fir<<" ";
			visited[-1*fir]=true;

			if(fir==sec and sec==third)
			{	
				if(p[i+1].second.first==p[i+2].second.first)
				{
					d[-1*fir]=make_pair("?","?");
				}
				else
					d[-1*fir]=make_pair(p[i].second.second,p[i+1].second.second);

			}
			else
			{
				d[-1*fir]=make_pair(p[i].second.second,p[i+1].second.second);
			}
			//	cout<<p[i].second.second<<" "<<p[i+1].second.second<<"\n";
			
		}
			
	}
	for(int i=1;i<=m;i++)
	{
		if(d[i].first!="?")
		cout<<d[i].first<<" "<<d[i].second<<"\n";
		else
			cout<<"?\n";
	}
	return 0;
}
