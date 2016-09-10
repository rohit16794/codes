# include <bits/stdc++.h>
using namespace std;

int main()
{
	int q,x,choice,data,f;
	cin>>q;
	//cout<<"xsaax";
	//int a[100005]={0};
	int freq[100005]={0};
	priority_queue <long long>maxq;
	priority_queue <long long > minq;
	while(q--)
	{
		cin>>choice;
		//cout<<choice;
		if(choice==1)
		{
			cin>>data;
			if(freq[data]==0)
			{
				freq[data]++;
			minq.push(-1*data);
			maxq.push(data);
		
			}
			
			}

		if(choice==2)
		{
			cin>>data;
			//cout<<"choice 1";

			if(freq[data]==0)
			{
				cout<<"-1\n";
			}
			else
			{
				--freq[data];
			}
		}

	if(choice==3)
	{
		if(maxq.size()==0)
		{
			cout<<"-1\n";
		}
		else
		{
			f=maxq.top();
			while(freq[f]==0 && maxq.size()!=0)
		{
			maxq.pop();
			f=maxq.top();
		}
		if(maxq.size()!=0)
		cout<<f<<"\n";
	else
		cout<<"-1\n";



		}
		
	}

	if(choice==4)
	{
		if(minq.size()==0)
		{
			cout<<"-1\n";
		}
		else
		{
			f=-1*minq.top();
		while(freq[f]==0 && minq.size()!= 0)
		{
			minq.pop();
			f=-1*minq.top();
		}
		if(minq.size()!=0)
		cout<<f<<"\n";
	else
		cout<<"-1\n";

		}
		
	}



	}

	return 0;
}