#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long k,a,b,c,d,beg,mid,end,x;

	cin>>t;

	while(t--)
	{
		cin>>a>>b>>c>>d>>k;
		beg=0;end=100000;

		while(beg<=end)
		{
			mid=beg+ (end-beg)/2;
			if(((a*mid*mid*mid)+(b*mid*mid)+c*mid+d)>k)
			{
				end=mid;
			}
			else
			{
				x=mid+1;
				if(((a*x*x*x)+(b*x*x)+c*x+d)<=k)
				{
					beg=mid;
				}
				else
					break;
			}
		}
		cout<<mid<<"\n";
	}
	return 0;
}