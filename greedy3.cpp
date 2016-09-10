#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,d,a;
	cin>>t;

	while(t--)
	{
		vector <int> p,n;

		cin>>d;
		while(d--)
		{

			cin>>a;

		if(a>=0)
		{
			p.push_back(a);
		}
		else
			n.push_back(a);


		}
		
		sort(p.begin(),p.end(),greater<int>());
		sort(n.begin(),n.end());

		int neg,pos,ans;
		long long min,max,check;
		long long minneg,maxneg;		
		if(n.size()==0)// all positive 
		{
			ans=p.size()-1;
			min=p[ans];

			// check for all zeroes.
			max=0;
			for(int i=0;i<p.size();i++)
			{
				if(p[i]!=0)
				{
					max=1;
				}
			}
			for(int i=0;i<p.size();i++)
			{
				if(p[i]!=0)
				{
					max=max*p[i];
				}
			}
	} // all posotive ends here.
else
	if(p.size()==0)// all negative 
	{
		if(n.size()%2==0)
		{
			check=n.size()-1;
		}
		else
			check=n.size();

		min=1;
		for(int i=0;i<check;i++)
		{
			min=min*n[i];
		}
		if(n.size()%2==0)
		{
			check=n.size();
		}
		else
			check=n.size()-1;

		max=1;
		//cout<<check;
		for(int i=0;i<check;i++)
		{
			max=max*n[i];
			//cout<<n[i]<<" ";
		}

	}
	// mix cases both positive and negative
	else
	{
		if(n.size()%2==0)
		{
			check=n.size()-1;
		}
		else
			check=n.size();

		minneg=1;

		for(int i=0;i<check;i++)
		{
			minneg=minneg*n[i];
		}

		if(n.size()%2!=0)
		{
			check=n.size()-1;
		}
		else
		{
			check=n.size();
		}
		maxneg=1;
		for(int i=0;i<check;i++)
		{
			maxneg=maxneg*n[i];
		}
		max=1;

		for(int i=0;i<p.size();i++)
		{
			if(p[i]!=0)
			{
				max=max*p[i];
			}
		}
		min=max*minneg;
		max=max*maxneg;
		
	}
	cout<<max<<" "<<min<<"\n";
}


	return 0;
}