#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	long long a[n],c;
	memset(a,0,n);

	for(int i=0;i<n;i++)
	{
		cin>>c;
		if(i==0)
			a[i]=c;
		else
		{
			a[i]=a[i-1]+c;
		}
	}
	int q,check,ans;
	cin>>q;

	while(q--)
	{
		int beg=0,end=n;
		int mid;
		cin>>check;

		while(beg<=end)
		{
			mid=beg+(end-beg)/2;
			if(a[mid]<check)
			{
				beg=mid+1;
			}
			else
			{
				ans=mid;
				end=mid-1;
			}
		}
		cout<<ans+1<<"\n";


	}

	return 0;
}