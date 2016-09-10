# include <bits/stdc++.h>
#define pair <char,int> PII;
using namespace std;

int main()
{

	int t;
	int n,k,m;
	cin>>t;

	while(t--)
	{
		cin>>n>>k>>m;
		vector<char> s[n+1];
		vector<PII> c[n+1];
		string d;
		for(int i=1;i<=n;i++)
		{
			cin>>d;
			for(int j=0;j<d.length();j++)
			{
				s[i].push_back(d[j]);
			}
			c[i]=make_pair(copy(s[i].begin(),s[i].begin()+m,back_inserter(c[i])),i);
		}
		for(int i=1;i<=n;i++)
		{
			//cout<<c[i].size();
			for(int j=0;j<c[i].size();j++)
				;//cout<<c[i][j];
			cout<<"\n";
		}
	}


	


	return 0;
}