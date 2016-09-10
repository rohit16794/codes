#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll n,a,p,t,b;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>a;

	vector<ll> v;
	v.push_back(a);
	char c;
	int check;
	while(n--)
	{
		cin>>c;

		if(c=='P')
		{
			cin>>p;
			v.push_back(p);
			b=v.size()-1;
			//cout<<b<<" ";
			check=0;
		}
		else
		{
			if(check==0)
			{
				--b;//cout<<b<<"\n";;
				check=1;
			}
			else
			{
				if(b==v.size()-1)
					--b;
				else
					++b;
			}
		}

	}
	//for(ll i=0;i<v.size();i++)
		//cout<<v[i]<<" ";
	cout<<"Player "<<v[b]<<"\n";
	}
	
	return 0;
}