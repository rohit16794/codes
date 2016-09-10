# include <bits/stdc++.h>
using namespace std;

int ancestor(int *arr,int a)
{
	if(arr[a]!=a)
	{
		arr[a]=ancestor(arr,arr[a]);
	}
	return arr[a];
}

void set_union(int *arr,int a,int b)
{
	int root_a = ancestor(arr,a);
	int root_b = ancestor(arr,b);

	if(a==b)
		return ;
	else
	{
		arr[root_a]=root_b;
	}
}

void make_leader(int *arr,int a)
{
	int x= ancestor(arr,a);
	arr[x]=arr[a]=a;
}


int main()
{
	int n,q,a,b,check;
	cin>>n>>q;
	int arr[n+1];

	for(int i=0;i<=n;i++)
		arr[i]=i;

	while(q--)
	{
		cin>>check;
		if(check==1)
		{
			cin>>a>>b;
			set_union(arr,a,b);
		}
		if(check==2)
		{
			cin>>a;
			make_leader(arr,a);
		}
		if(check==3)
		{
			cin>>a;
			cout<<ancestor(arr,a)<<"\n";
		}
	}



	return 0;
}