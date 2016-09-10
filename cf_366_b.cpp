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

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int even=0,odd=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			++even;
		else
			++odd;
		if(even%2==1)
			cout<<"1\n";
		else
			cout<<"2\n";
	}
	return 0;
}
