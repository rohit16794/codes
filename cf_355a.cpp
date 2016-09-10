#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

	ll n,h,k;
	cin>>n>>h>>k;
	ll arr[n];

	for(ll i=0;i<n;i++)
		cin>>arr[i];

	ll curr=0;
	ll i=0;
ll sec=0;
	while(i<n)
	{
		while(curr<=h)
		{
			curr=curr+arr[i];
			++i;
			//cout<<curr<<endl;
		}
		if(curr>h)
		{curr=curr-arr[i-1];
			--i;}
		//cout<<curr<<endl;
		curr=curr-k;
		if(curr<0)
			curr=0;
			//cout<<curr<<" ";
		++sec;

	}

while(curr>0)
{
	curr=curr-k;
	++sec;
	//cout<<"csasc0";
}
cout<<sec;

	return 0;
}