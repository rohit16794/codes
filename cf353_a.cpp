#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	double a,b,c;
	cin>>a>>b>>c;

	if(c==0)
	{
		if(a==b)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
	{
		double ans=(b+c-a)/c;

		if(floor(ans)==ceil(ans))
		{
			if(ans<=0)
				cout<<"NO";
			else
				cout<<"YES";
		}
		else
			cout<<"NO";
	}

	return 0;
}
