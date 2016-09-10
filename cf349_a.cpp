#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)
#define PI 3.141592653589
int main()
{
	 double d,h,v,e,t,check;
	cin>>d>>h>>v>>e;

	check=((4.0000000000000*v)-(PI*d*d*e));
	if(check!=0)
	t=(PI*d*d*h)/check;

	check=(4.000000000000*v)/(PI*d*d);


	if(check<=e)
		cout<<"NO";
	else
		printf("YES\n%.13f",t);
		//cout<<t;

	return 0;
}
