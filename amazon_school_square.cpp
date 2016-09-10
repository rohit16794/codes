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
	int t;
	int ax,ay,bx,by,cx,cy,dx,dy;

	cin>>t;
	int ab,bc,cd,da,ac,bd;
	while(t--)
	{
		cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;

		ab= ((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay));
		bc= ((bx-cx)*(bx-cx)) + ((by-cy)*(by-cy));
		cd=	((cx-dx)*(cx-dx)) + ((cy-dy)*(cy-dy));
		da= ((dx-ax)*(dx-ax)) + ((dy-ay)*(dy-ay));

		ac=((ax-cx)*(ax-cx)) + ((ay-cy)*(ay-cy));
		bd=	((bx-dx)*(bx-dx)) + ((by-dy)*(by-dy));

		int arr[6];
		arr[0]=ab;arr[1]=bc;arr[2]=cd;arr[3]=da;

		arr[4]=ac;arr[5]=bd;

		int four=0,two=0;
		int check1,check2;
		/*
		for(int i=0;i<6;i++)
		{
			cout<<arr[i]<<" ";
		}*/
		for(int i=0;i<6;i++)
		{
			check1=0;//check2=1;
			for(int j=0;j<6;j++)
			{
				if(arr[i]==arr[j])
					++check1;
			}
			if(check1==4)
				++four;
			if(check1==2)
				++two;
		}
		//cout<<four<<" "<<two<<"\n";
		if(four==4 and two==2)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}
