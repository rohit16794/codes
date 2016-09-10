# include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll t,n;
	cin>>t;

	ll a;
	while(t--)
	{
		cin>>n;
		ll arr[n];

		for(ll i=0;i<n;i++)	
			cin>>arr[i];

		ll count=1;
		ll max=1;

		for(ll i=1;i<n;i++)
		{
			if(arr[i-1]>arr[i])
			{
				++count;
			}
			else
			{
				if(count>max)
				{
					max=count;
					
				}
				count=1;
			}
		}
		cout<<max<<"\n";
	}
	

	return 0;
}