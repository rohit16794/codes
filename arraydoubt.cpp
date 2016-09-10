#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)

void check(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=a[i]+1;
	}
}


int main()
{
	int a[]={1,2,3,4,5};

	check(a,5);
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";

	return 0;


}
