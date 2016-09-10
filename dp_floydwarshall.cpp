#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF 999999

#define V 4

void floyd_warshall(int arr[][V])//,int V)
{
	int dp[V][V];

	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
			{dp[i][j]=arr[i][j];
		//cout<<arr[i][j]<<" ";
	}
	//cout<<"\n";
}

	for(int k=0;k<V;k++)
	{
		for(int i=0;i<V;i++)
		{
			for(int j=0;j<V;j++)
			{
				if(dp[i][k]+dp[k][j]<dp[i][j])
					dp[i][j]=dp[i][k]+dp[k][j];
			}
		}
	}

	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
			cout<<dp[i][j]<<" ";

		cout<<"\n";
	}


}

int main()
{
	int graph[V][V] = { {0,   5, 99999 , 10},
                        {99999, 0,   3, 99999},
                        {99999, 99999, 0,   1},
                        {99999, 99999, 99999, 0}
                      };
 

 	floyd_warshall(graph);//,V);



	return 0;
}
