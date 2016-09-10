#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct cmp
{
	bool operator()(const pair <ll,ll> &a, const pair<ll,ll> &b)
{
	return a.second<b.second;
}
};


multiset<pair<ll,ll>,cmp > s;
ll size[100005];

ll root(ll *arr,ll a)
{
	while(arr[a]!=a)
	{
		arr[a]=root(arr,arr[a]);
	}
	return arr[a];
}

void set_union(ll *arr,ll a,ll b)
{
	ll root_a= root(arr,a);
	ll root_b= root(arr,b);
	ll v;
	if(root_a==root_b)
		return ;
	else
	{
		arr[root_a]=root_b;
		v=size[root_b];

		size[root_b]+=size[root_a];
		//size[root_a]=size[root_b];
		s.erase(s.find(make_pair(root_a,v)));
		s.erase(s.find(make_pair(root_b,v)));
		s.insert(make_pair(root_b,size[root_b]));
		s.insert(make_pair(root_a,size[root_b]));	
	}
}

int main()
{
	ll n,q;
	cin>>n>>q;
	ll arr[n+1];
	ll x,y;
	for(int i=0;i<=n;i++)
	{
		arr[i]=i;
		size[i]=1;
		s.insert(make_pair(i,1));
	}
	ll a,b,fir,sec;

	while(q--)
	{
		cin>>a>>b;
		set_union(arr,a,b);

		
			
			fir= (*(s.rbegin())).second;
			x= (*(s.rbegin())).first;

			s.erase(s.find(make_pair(x,fir)));

			sec= (*(s.rbegin())).second;
			s.insert(make_pair(x,fir));

			cout<<fir-sec<<"\n";

	}


	return 0;
}