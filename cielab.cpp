#include <bits/stdc++.h>
using namespace std;

 int main()
{
	/* code */
	int a,b;
	cin>>a>>b;

	int c=a-b;
	if(c==1)
	{
		cout<<"5";return 0;
	}
	//cout<<c;
	stack <int> s;

	while(c>0)
	{
		s.push(c%10);
		c=c/10;
	}
//cout<<s.size()<<"asdasd";
	int p[s.size()];
int check=s.size();
	for(int i=0;i<check;i++)
	{	p[i]=s.top();
		//cout<<p[i]<<" cacs";
		s.pop();	
	}

	if(p[check-1]==0)
	{
		p[check-1]=9;	
	}
	else
	{
		p[check-1]--;
	}
//cout<<"hello";
	for(int i=0;i<check;i++)
		cout<<p[i];

	return 0;
}