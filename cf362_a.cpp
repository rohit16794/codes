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
	long long t,s,x;
	long long n1,n2;
	cin>>t>>s>>x;
	//cout<<(-2%2);

	n1=x-t+s;
	n2=x-t-1;

	bool flag1=0,flag2=0;
	//cout<<n1<<" "<<n2;
	if(n1>0 and n1%s==0)
		flag1=1;
	if(n2>0 and n2%s==0)
		flag2=1;
	//cout<<flag1<<" "<<flag2;
	if(flag1 or flag2)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
