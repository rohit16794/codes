#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

int main()
{
	string replace,position;
	getline(cin,replace);
	getline(cin,position);

	int len1=replace.length();
	int len2=position.length();
	int words1=0,words2=0;
	
	for(int i=0;i<len1;i++)
	{
		if(replace[i]==' ')
			++words1;
	}

	++words1;

	vector<char> v[words1];

	//for(int i=0;i<words1;i++)
	
		int i=0,j=0,k;
		//char arr[1000];
		while(j<len1)
		{
			k=0;
			while(replace[j]!=' ')
			{
				//arr[k++]=replace[j++];
				v[i].push_back(replace[j++]);
			}
			++j;
			++i;
			//string g(arr);
			//1v[i].push_back(g);
		}
		
		cout<<v;
		
	


	return 0;
}
