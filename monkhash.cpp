#include <bits/stdc++.h>
using namespace std;

int array[1000005];

int main()
{
	int t;
	int n;
	int a,b,count;

	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		count=0;
		++array[a];

		if(array[b]==0)
		{
			++count;
		}
		else
			--array[b];
	}
cout<<count<<"\n";



	return 0;
}