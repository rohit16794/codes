#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;

		long long a[n],i;
		for(int i=0;i<n;i++)
			cin>>a[i];

		pair <int, int> p[n];
		for(i=0;i<n;i++)
		{
			p[i]=make_pair(0,i);
		}
		long long c;
		for(i=0;i<n;i++)
		{
			c=a[i];
			while(c>0)
			{
				if(c%2==1)
					++p[i].first;

				c/=2;
			}
		}
		sort(p,p+n);

		for(i=0;i<n;i++)
		{
			cout<<a[p[i].second]<<" ";
		}
cout<<"\n";
	}
	return 0;
}
