# include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	long long sum;

	while(t--)
	{
		cin>>n>>k;
sum=0;
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		}
		while(k--)
		{
			pair<int,int> r[n];
			pair<int,int> c[n];

			int check;

		for(int i=0;i<n;i++)
		{
			check=0;
			for(int j=0;j<n;j++)
				check+=a[i][j];

			r[i]=make_pair(check,i);
		}

		for(int j=0;j<n;j++)
		{
			check=0;
			for(int i=0;i<n;i++)
				check+=a[i][j];

			c[j]=make_pair(check,j);
		}
 	sort(r,r+n);
 	sort(c,c+n);
	
	if(r[0].first<=c[0].first)
	{
		sum+=r[0].first;

		for(int j=0;j<n;j++)
		{
			++a[r[0].second][j];
		}
	}
	else
	{
		sum+=c[0].first;

		for(int j=0;j<n;j++)
		{
			++a[j][c[0].second];
		}
	}


		}// k waala loop.
		
cout<<sum<<"\n";

	}// test case loop.



	return 0;
}