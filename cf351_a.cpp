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

	int ans1,ans2;

	ans1=(n/7)*2;
	int a=ans1;
	if(n%7==6)
		++ans1;

	ans2=a+min(2,n%7);

	cout<<ans1<<" "<<ans2;
	return 0;
}
