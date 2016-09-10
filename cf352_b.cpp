#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	string s;
	cin>>n>>s;

	ll len=s.length();

	map<char,ll> mp;
	//char ch='a';

	for(char ch='a';ch<='z';ch++)
	{
		mp[ch]=0;
	}

	for(ll i=0;i<len;i++)
	{
		++mp[s[i]];
	}
	ll ans=0;
	ll zeroes=0;
	for(char ch='a';ch<='z';ch++)
	{
		if(mp[ch]>1)
		{
			ans=ans+(mp[ch]-1);
		}
		if(mp[ch]==0)
			++zeroes;
	}
	if(ans<=zeroes)
	cout<<ans;
else
	cout<<"-1";
	return 0;
}
