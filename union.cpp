# include <bits/stdc++.h>
using namespace std;

int root(int *a,int i)
{
	while(a[i]!=i)
	{
		a[i]= a[a[i]];
		i=a[i];
	}
	return i;
}

void set_union(int *arr,int a,int b)
{
	int root_a = root(arr,a);
	int root_b = root(arr,b);

	arr[root_a]= root_b;
}

bool find(int a,int b,int *arr)
{
	if(root(arr,a)==root(arr,b))
		return true;
	else
		return false;
}

int main()
{
	int arr[10];

	for(int i=0;i<10;i++)
	{
		arr[i]=i;
	}

	set_union(arr,1,0);
	set_union(arr,0,2);
	set_union(arr,3,4);
	set_union(arr,1,4);

	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}


}