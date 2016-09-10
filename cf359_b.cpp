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
	bool check;
	while(1)
	{

		for(ll i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				cout<<i+1<<" "<<i+2<<"\n";
				swap(arr[i],arr[i+1]);
				break;
			}
		}
		bool check=true;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]>arr[i+1])
			{check=false;
			break;}
		}
		if(check==true)
			break;
	}	


	return 0;
}
