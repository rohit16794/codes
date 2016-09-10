#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

int comp(string x,string y)
{
	string xy=x.append(y);
	string yx=y.append(x);

	if(xy>yx)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		vector<string> str;
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			str.push_back(s);
		}

		sort(str.begin(),str.end(),comp);

		for(int i=0;i<n;i++)
			cout<<str[i];
	}
	return 0;
}
