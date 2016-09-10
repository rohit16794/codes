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
	ll t;
	cin>>t;

	string s1,s2;
	ll n1,n2,carry;

	while(t--)
	{
		cin>>s1>>s2;

		n1=s1.length();
		n2=s2.length();

		stack<int> s;

		ll i,j;
		i=n1; 
		j=n2;
	//	cout<<i<<" "<<j;
		carry=0;
		while(i>0 and j>0)
		{
			//cout<<i<<" "<<j<<"\n";
			s.push(carry+((s1[i-1]+s2[j-1])-96)%2);
			cout<<s.top()<<" "<<i<<"\n";
			//cout<<(carry+((s1[i-1]+s2[j-1])-96)%2)<<"\n";
			//cout<<(carry+s1[i-1]+s2[j-1])<<"\n";
			if((carry+s1[i-1]+s2[j-1]-96)>=2)
				carry=1;

			
			--i;--j;
		}
		if(carry==1)
			s.push(1);

		while(!s.empty())
		{
			cout<<s.top();
			s.pop();
		}
	}
	return 0;
}
