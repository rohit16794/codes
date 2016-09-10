#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	string s;
	cin>>s;

	ll len = s.length();

	for(ll i=0;i<len;i++)
		cout<<s[i];

	for(ll i=len-1;i>=0;i--)
		cout<<s[i];
	return 0;
}
