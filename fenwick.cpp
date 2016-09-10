#include <bits/stdc++.h>
using namespace std;

int bit[1000],a[1000],n;

void update(int x,int val)
{
	//++x;
	//cout<<n;
	for(;x<=n;x=x+(x&-x))
	{
		bit[x]+=val;
	}
}

int query(int x)
{
	int sum=0;
	//++x;
	for(;x>0;x=x-(x&-x))
	{
		sum+=bit[x];
	}
	return sum;
}


int main()
{
	//int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{	cin>>a[i];
		update(i,a[i]);
}

cout<<query(5);


	return 0;
}