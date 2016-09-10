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
	string s;
	cin>>s;

	ll len=s.length();

	ll start=0,end=0;
	/*rep(i,len)
	{
		if(s[i]!='a')
		{
			start=i;
			break;
		}
	}*/

		//cout<<s[0];
		//cout<<len;
			
		ll j=0;

		while(j<len)
		{
			if(s[j]=='a')
			{
				++j;
			}
			else
			{
				start=j;break;
			}
		}


	/*for(ll i=start+1;i<len;i++)
	{
		if(s[i]=='a')
		{
			end=i-1;break;
		}
	}*/
		ll k=start+1;

		while(k<len)
		{
			if(s[k]=='a')
			{
				//cout<<"rohit"
				end=k-1;break;
			}
			else
			{
				++k;
			}
		}
		if(k==len)
		{
			end=len-1;
		}
	map<char,char> mp;
	//cout<<start<<" "<<end;
	char ch='b';
	while(ch!='z')
	{
		mp[ch]=ch-1;
		++ch;
	}
	
	mp['z']='y';
	mp['a']='a';
	//cout<<mp['z'];
	int i=0;

ch='a';

	while(i<26)
	{
		cout<<mp[ch++]<<" ";
		++i;
	}
	for(ll i=start;i<=end;i++)
	{
		s[i]=mp[s[i]];
	}
cout<<s;
	return 0;
}
