#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<pair<ll,ll> > vp;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;

	char sex;
	int x,y;
	vector<pair<ll,ll> > male,female;
	while(n--)
	{
		

		cin>>sex>>x>>y;

		if(sex=='M')
		{
			male.push_back(make_pair(x,y));
		}
		else
		{
			female.push_back(make_pair(x,y));
		}	
	}
	int ansm,ansf;
	int maxi=0;
	for(int day=1;day<=366;day++)
	{
		ansm=0;ansf=0;
		for(vp ::iterator i=male.begin();i!=male.end();i++)
		{
			if(day>=i->first and day<=i->second)
				++ansm;
		}

			for(vp ::iterator i=female.begin();i!=female.end();i++)
			{
			if(day>=i->first and day<=i->second)
				++ansf;
			}
			maxi=max(maxi,(min(ansm,ansf)*2));

	}	
	cout<<maxi;
	return 0;
}
