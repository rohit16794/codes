# include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long z,m,n,count,count1;
	cin>>t;

	while(t--)
	{
		count=0;count1=0;
		cin>>z>>m>>n;

		for(int i=1;i*i<=z;i++)
		{
			if(z%i==0)
			{
				if(i<=m&&(z/i)<=n)//i!=(z/i))
				++count;

				if((z/i)<=m&&i<=n)//&&i!=(z/i))
					++count;

					if(i==(z/i))
						++count1;
			}
		}
		cout<<count-count1<<"\n";
	}
	return 0;
}