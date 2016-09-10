# include <bits/stdc++.h>
using namespace std;

struct cmp
{
	bool operator() (const pair<int, int>& a, const pair<int, int>& b)
	{
		return a.second < b.second;
	}
};


typedef long long ll;
multiset <pair<ll,ll>,cmp > S;

ll size[100005];
ll max,min;

ll root(ll *a,ll i)
{
	while(a[i]!=i)
	{
		a[i]=a[a[i]];
		i=a[i];
	}
	return i;
}

void set_union(ll *arr,ll a,ll b)
{
	ll root_a= root(arr,a);
	ll root_b= root(arr,b);

	if(root_b==root_a)
		return;

	
	if(size[root_a]>size[root_b])
	{
		swap(root_a,root_b);
	}

	
	S.erase(S.find(make_pair(root_a,size[root_a])));
	S.erase(S.find(make_pair(root_b,size[root_b])));

	arr[root_a]=root_b;
	size[root_b]+=size[root_a];

	S.insert(make_pair(root_b,size[root_b]));

}

int main()
{
	ll q,a,b, n;
	cin>>n>>q;

	ll arr[n+1];
	for(int i=1;i<=n;i++)
	{
		arr[i]=i;
		size[i]=1;
		S.insert(make_pair(i,1));
	}
	while(q--)
	{
		cin>>a>>b;
		set_union(arr,a,b);

		ll large= (*(S.rbegin())).second;
		ll small = (*(S.begin())).second;

		cout<<large-small<<"\n";
	}
	return 0;

}