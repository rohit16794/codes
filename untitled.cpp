#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int q,l1,r1,l2,r2,check;

	cin>>s;
	int len=s.length();

	cin>>q;

	while(q--)
	{
		cin>>l1>>r1>>l2>>r2;
		int len1= r1-l1+1;
		int len2= r2-l2+1;
		check=1;
		
		if(len1!=len2)
		{
			cout<<"No\n";
		}
		else
		{
			--l2;
			for(int i=l1-1;i<r1;i++)
			{
				if(s[i]!=s[l2++])
				{
					check=0;break;
				}
				
			}
			if(check)
				cout<<"Yes";
			else
				cout<<"No";
		}
	}

	return 0;
}