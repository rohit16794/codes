# include <bits/stdc++.h>
using namespace std;

int cell[21][21],marked[21][21],count_route=0,n;

void fun(int i,int j)
{
	if(i==n&&j==n)
		{++count_route;
			return;}

	marked[i][j]=1;

	if(i+1<=n && cell[i+1][j]==0 && marked[i+1][j]==0)
		fun(i+1,j);
	if(j+1<=n && cell[i][j+1]==0 && marked[i][j+1]==0)
		fun(i,j+1);
	if(j-1>=1 && cell[i][j-1]==0 && marked[i][j-1]==0)
		fun(i,j-1);
	if(i-1>=1 && cell[i-1][j]==0 && marked[i-1][j]==0)
		fun(i-1,j);
	marked[i][j]=0;
	return;
}


int main()
{
	int t;
	cin>>t;

	//int n;
	while(t--)
	{
		cin>>n;

		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>cell[i][j];
				marked[i][j]=0;
			}
		}
		count_route=0;
		fun(1,1);
		cout<<count_route<<"\n";
	}
return 0;
}
