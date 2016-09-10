# include <bits/stdc++.h>
using namespace std;

long long func(int n,int counter)
{
	while(n)
	{
		n=n&(n-1);
		++counter;
	}
	return counter;
}

int main()
{
	int t;
	cin>>t;
	long long m,p,counter;
	while(t--)
	{	
		counter=0;
		cin>>m>>p;
		cout<<func(m^p,counter)<<"\n";
	}
	return 0;
}