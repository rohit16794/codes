#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

void insert_at_bottom(stack<int> *s,int item)
{
	if((*s).empty())
	{
		(*s).push(item);
	}
	else
	{
		int temp=(*s).top();
		(*s).pop();
		insert_at_bottom(s,item);
		(*s).push(temp);
	}
}

void reverse_stack(stack<int> *s)
{
	if((*s).empty())
		{//cout<<"rohit";
			return ;}
	else
	{
		int temp=(*s).top();
		(*s).pop();
		reverse_stack(s);
		insert_at_bottom(s,temp);
		//cout<<temp<<" ";
		
	}
}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	//cout<<"sasca"<<s.top();
	/**/
	reverse_stack(&s);
	while(!s.empty())
	{
		cout<<s.top()<<"\n";
		s.pop();
	}
	
	return 0;

}
