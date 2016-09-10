# include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
int flag;
	string s;

	while(t--)
	{
		flag=0;
		cin>>s;
		stack <char> q;

		for(int i=0;i<s.length();i++)
		{

			if(s[i]=='('||s[i]=='{'||s[i]=='[')
			q.push(s[i]);

			if(s[i]==')')
			{
				if(q.empty())
				{
					flag=1;break;
				}
				if(q.top()!='(')
				{
					flag=1;break;
				}
				else
					q.pop();
			}	

			if(s[i]=='}')
			{
				if(q.empty())
				{
					flag=1;break;
				}
				if(q.top()!='{')
				{
					flag=1;break;
				}
				else
					q.pop();
			}

if(s[i]==']')
			{
				if(q.empty())
				{
					flag=1;break;
				}
				if(q.top()!='[')
				{
					flag=1;break;
				}
				else
					q.pop();
			}


		}

if(flag)
	cout<<"NO\n";
else
	cout<<"YES\n";
}

	return 0;
}