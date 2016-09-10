#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long m,n,c,sum;
	cin>>m>>n;

	priority_queue <long long > pq;

	for(long long i=0;i<n;i++)
	{
		cin>>c;
		pq.push(c);
	}
	sum=0;

	for(long long i=0;i<m;i++)
	{
		sum+=pq.top();
		c=pq.top()-1;
		pq.pop();
		pq.push(c);
	}
	cout<<sum.;

	return 0;
}