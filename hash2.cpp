# include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	long long n,a,b,count;
	
	
	
	
	while(t--)
	{
		cin>>n;
		count=0;
		int freq[1000005]={0};
		while(n--)
		{
			cin>>a>>b;

		if(a!=b)
		{
			if(freq[b]==0)
				++count;
			else
			{
				--freq[b];
			}
			++freq[a];

		}
	}
		
cout<<count<<"\n";

	}
	return 0;
}