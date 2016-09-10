# include <bits/stdc++.h>
using namespace std;

typedef pair <long long,long long> PII;
//long long zvalue();


int main()
{

	long long c,p,n;
	int i;
	cin>>c>>p>>n;

	long long iq[c+1],monkiq[p+1];

	memset(iq,0,c+1);

	for(i=1;i<=n;i++)
	{
		cin>>iq[i];
	}

	for(i=1;i<=p;i++)
	{
		cin>>monkiq[i];
	}

	stack<long long> course [c+1];

	for(int j=1;j<=c;j++)
	{
		course[j].push(iq[j]);
	}

	priority_queue< PII ,vector <PII>,greater<PII> > pq;
	PII check;
	for(i=1;i<=c;i++)
	{
		
		check= make_pair(iq[i],i);
		pq.push(check);
	}

	long long answer[p+1],z,fir,sec;;
	for(i=1;i<=p;i++)
	{
		check=pq.top();
		answer[i]=check.second;

		pq.pop();

		course[check.second].push(monkiq[i]);

		if(course[check.second].size()==1)
		{
			z=course[check.second].top();
		}
		else
			if(course[check.second].size()>=2)
			{
				fir=course[check.second].top();
				course[check.second].pop();
				sec=course[check.second].top();
				course[check.second].push(fir);

				z= (fir+sec)*course[check.second].size();
			}

			pq.push(make_pair(z,check.second));


	}
for(i=1;i<=p;i++)
	cout<<answer[i]<<" ";

	return 0;
}