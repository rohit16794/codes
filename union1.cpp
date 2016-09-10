# include <bits/stdc++.h>
using namespace std;

long long root(long long *a,long long i)
{
	while(a[i]!=i)
	{
		a[i]= a[a[i]];
		i=a[i];
	}
	return i;
}

void set_union(long long *arr,long long a,long long b)
{
	long long root_a = root(arr,a);
	long long root_b = root(arr,b);

	arr[root_a]= root_b;
}

bool find(long long a,long long b,long long *arr)
{
	if(root(arr,a)==root(arr,b))
		return true;
	else
		return false;
}

int main()
{
	long long k, n,a,b;
	cin>>n;

	long long arr[n+1];

	for(long long i=1;i<=n;i++)
		arr[i]=i;

	cin>>k;

	while(k--)
	{
		cin>>a>>b;
		set_union(arr,b,a);
	}

	long long counter=0;

	for(long long i=1;i<=n;i++)
	{
		if(arr[i]==i)
			++counter;
	}
cout<<counter;

}