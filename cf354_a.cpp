#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;

	ll arr[n];

	rep(i,n)
	cin>>arr[i];

	ll first,firstindex,last,lastindex;

	for(ll i=0;i<n;i++)
	{
		if(arr[i]==1 or arr[i]==n)
		{
			first=arr[i];firstindex=i;break;
		}
	}
	//cout<<first;
	//cout<<firstindex<<" ";

	for(ll i=0;i<n;i++)
	{
		//cout<<first;
		if(first==1)
		{
			if(arr[i]==n)
			{
				lastindex=i;break;
			}
		}
			else
				if(first==n)
				{
					//cout<<"sxaas";
					if(arr[i]==1)
					{
						lastindex=i;break;
					}
				}
		}
	
	//cout<<lastindex;
	
	if(((n-1)-lastindex)>=firstindex)
		lastindex=n-1;
	else
		firstindex=0;

	cout<<lastindex-firstindex;


	return 0;
}