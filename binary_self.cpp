#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll arr[1000000];

ll first(ll lo,ll hi,ll val)
{
	ll mid,check=0;

	
	while(hi-lo>1)
	{
		mid=(hi+lo)>>1;
		if(arr[mid]>=val)
		{	hi=mid;check=1;}
		else
		{
			lo=mid;
		}
			
		
	}
if(check)
	return lo;
else
	return -1;
}

ll last(ll lo,ll hi,ll val)
{
	//ll mid=(lo+hi)>>1;
		 ll mid,check=0;
		 while(hi-lo>1)
		 {
		 	mid=(hi+lo)/2;
		 	
		 	if(val>=arr[mid])
		 	{
		 		lo=mid;check=1;
		 	}
		 	else
		 	hi=mid;
		 }
		 if(check==1)
		 return hi;
		 else
		 return -1;
}

int main()
{
	ll n,q;
	cin>>n;

	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);

	cin>>q;
	ll x,y,f,l;

	while(q--)
	{
		cin>>x>>y;
		f=first(0,n-1,x);
		l=last(0,n-1,y);

		if(f==-1 || l==-1)
		{
			//cout<<"0"<<"\n";
		}
		//else

			//cout<<l-f+1<<"\n";
	

		cout<<f<<" "<<l<<"\n";
	}

	return 0;
}