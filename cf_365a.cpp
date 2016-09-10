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
	int n;
	cin>>n;

	int a,b;
	int x=0,y=0;

	while(n--)
	{
		cin>>a>>b;
		if(a>b)
			++x;
		if(b>a)
			++y;
	}
	if(x>y)
		cout<<"Mishka";
	if(y>x)
		cout<<"Chris";
	if(x==y)
		cout<<"Friendship is magic!^^";
	return 0;
}
