#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

typedef long long ll;
int A,B;
ll ans;
ll func(int n,int x)
{
	if(n==0)
		return x;

	 //ans = (((A%1000000007 *func(n-1,x)%1000000007)%1000000007)%1000000007 + B%1000000007) %1000000007;
	 ans = ((A% MOD * func(n-1,x)%MOD)%MOD + B%MOD)%MOD;
	return ans;
}

int main()
{
	
	int n,x;
	cin>>A>>B>>n>>x;

	cout<<func(n,x);

	return 0;
}