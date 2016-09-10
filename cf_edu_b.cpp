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
		cin>>arr[i];

	int start,end,mid;

	start=arr[0];
	end=arr[n-1];
	int dist=INT_MAX;
	int ans;
	int diff;
	while(start<=end)
	{
		mid=(start+end)/2;
		//cout<<mid<<" ";
		diff=0;
		for(int i=0;i<n;i++)
		{
			diff=diff+abs(arr[i]-mid);
		}
		if(diff<=dist)
		{
			dist=diff;
			ans=mid;
			end=mid-1;
		}
		else
			start=mid+1;
	}
	cout<<ans;
	return 0;
}
