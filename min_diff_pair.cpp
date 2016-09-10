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
	int t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		//int max_so_far=arr[0];
		int diff=arr[1]-arr[0];


		for(int i=2;i<n;i++)
		{
			if(arr[i]-arr[i-1]<diff)
			diff=arr[i]-arr[i-1];
		}

		cout<<diff<<"\n";
		
	}
	return 0;
}
