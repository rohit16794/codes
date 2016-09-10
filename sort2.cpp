# include <bits/stdc++.h>
using namespace std;

int freq[1000005];

void merge(int *l,int nl,int *r,int nr,int *a)
{
	int i,j,k;
	i=j=k=0;

	while(i<nl && j<nr)
	{
		if(l[i]<r[j])
		{
			a[k++]=l[i++];
		}
		else
		{
			++freq[l[i]];
			a[k++]=r[j++];
		}
		while(i<nl)
		{
			a[k++]=l[i++];
		}
		while(j<nr)
		{
			a[k++]= r[j++];
		}
	}
}


void mergesort(int *a, int n)
{
	int *l,*r;
	int mid;
	if(n<2)
		return;

	mid=n/2;

	l= new int [mid];
	r= new int [n-mid];

	for(int i=0;i<mid;i++)
		l[i]=a[i];

	for(int i=mid;i<n;i++)
	{
		r[i-mid]=a[i];
	}

	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(l,mid,r,n-mid,a);
}


int main()
{
	int t;
	cin>>t;
	int n;
	
	while(t--)
	{	
		cin>>n;
		memset(freq,0,1000005);
		int a[n],b[n];
		for(int i=0;i<n;i++)
			{cin>>a[i];
				b[i]=a[i];	
			}

		mergesort(b,n);

		for(int i=0;i<n;i++)
		{
			cout<<freq[a[i]]<<" ";
		}
	}

	return 0;
}