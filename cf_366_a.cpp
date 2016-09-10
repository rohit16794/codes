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

	for(int i=1;i<n;i++)
	{
		if(i%2==1)
		{
			cout<<"I hate that ";
		}
		else
		{
			cout<<"I love that ";
		}
	}

	if(n%2==1)
	{
		cout<<"I hate it";
	}
	else
		cout<<"I love it";
	return 0;
}
