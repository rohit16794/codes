# include <bits/stdc++.h>
using namespace std;

int hash(int n)
{
	return (n%10);
}
	
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		int freq[10]={0};
	long long count=0;
		for(int i=0;i<n;i++)
		{
			if(freq[a[i]%10]==0)
			freq[a[i]%10]=1;
			else
			++count;
		}
		
		
		cout<<count<<"\n";
	}
	return 0;
}