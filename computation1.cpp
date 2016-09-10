# include <bits/stdc++.h>
# include <cstdio>
using namespace std;

int main()
{
	double a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;

	double x1,y1,x2,y2,x3,y3;

	x1= e+a-c;
	y1=f+b-d;

	x2=e-a+c;
	y2=f-b+d;

	x3=a+c-e;
	y3=b-f+d;

	pair<double,double> p[3];

	p[0]=make_pair(x1,y1);
	p[1]=make_pair(x2,y2);
	p[2]=make_pair(x3,y3);

	sort(p,p+3);

	for(int i=0;i<3;i++)
	{
		//cout<<p[i].first<<" "<<p[i].second;
		printf("%.04lf %.04lf",p[i].first,p[i].second);
		cout<<"\n";
	}



	return 0;
}