#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;

	char arr[n][n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}

	int row=0;
	int col=0;


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]=='C')
			{
				for(int k=j+1;k<n;k++)
				{
					if(arr[i][k]=='C')
						++row;
				}
			}
		}
	}


	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i][j]=='C')
			{
				for(int k=i+1;k<n;k++)
				{
					if(arr[k][j]=='C')
						++col;
				}
			}
		}
	}

	//cout<<row<<" "<<col;
	cout<<row+col;


	return 0;
		
}
