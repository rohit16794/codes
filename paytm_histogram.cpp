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

		int j=0;
		int max_area=0;
		int tp;
		int area;
		stack<int> s;
		while(j<n)
		{
			if(s.empty()|| arr[j]>=arr[s.top()])
			{
				s.push(j++);
			}
			else
			{
				tp=s.top();
				s.pop();

				area=arr[tp]*(s.empty()?j:j-s.top()-1);

				if(area>max_area)
					max_area=area;
			}

		}

		while(!s.empty())
		{
			tp=s.top();
			s.pop();

			area=arr[tp]*(s.empty()?j:j-s.top()-1);

			if(area>max_area)
				max_area=area;
		}
		cout<<max_area<<"\n";
	}
	return 0;
}
