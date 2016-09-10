# include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	string s;

	map <string,long long> mp;

	while(n--)
	{
		cin>>s;

		if(mp.find(s)==mp.end())
		{
			mp[s]=1;
		}
		else
		{
			mp[s]++;
		}
	}

	long long max=-1;
	string ans;
	map <string,long long> :: iterator it;

	for(it = mp.begin();it!=mp.end();it++)
	{
		if(it->second>max)
		{
			max=it->second;
			ans= it->first;
		}
	}

	vector <string> v;

	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second==max)
		{
			v.push_back(it->first);
		}
	}

	sort(v.begin(),v.end());

	cout<<v[0];




	return 0;
}