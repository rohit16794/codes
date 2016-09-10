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
	int t,n,k;
	cin>>t;

	while(t--)
	{
		cin>>n;
		vector<int> arr;
		int d; //arr[n];

		for(int i=0;i<n;i++)
			{//cin>>arr[i];
				cin>>d;
				arr.push_back(d);
}
		cin>>k;
		int i;
		for( i=0;i<n-3;i=i+3)
		{
			arr.reverse(i,i+3);
		}

		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";


	}
	return 0;
}
