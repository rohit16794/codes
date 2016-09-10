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
	int t;
	cin>>t;

	int n;

	while(t--)
	{

		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++)
			cin>>arr[i];

		stack<int> s;
		s.push(0);
		int ans[n];
		ans[0]=1;
		for(int i=1;i<n;i++)
		{
			while(s.empty()==false and arr[s.top()]<=arr[i])
			{
				s.pop();
			}

			ans[i]=(s.empty())?i+1:i-s.top();

			s.push(i);
		}
		for(int i=0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
