#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	//ll arr[1000000];
	ll n;
	cin>>n;
	vector<ll> v;
	for(ll i=1;i<=9;i++)
		v.push_back(i);
		//arr[i]=i;
	ll temp;
	for(ll i=10;i<=1000;i++)
	{
		temp=i;
		stack<ll> s;
		while(temp>0)
		{
			s.push(temp%10);
			temp=temp/10;
		}
		while(!s.empty())
		{
			v.push_back(s.top());
			s.pop();
		}
	}

	cout<<v[n-1];



	return 0;
}
