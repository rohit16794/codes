#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;
typedef struct node st;

struct node
{
	int data;
	st *left,*right;
};

st *newNode(int data)
{
	st *temp=(st*)malloc(sizeof(st));

	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}

int func(st *t1,st *t2)
{
	if(t1==NULL and t2==NULL)
		return 1;
	if(t1!=NULL and t2!=NULL)	
	return( t1->data==t2->data and (func(t1->left,t2->left) and func(t1->right,t2->right)));
	else
		return 0;
}
// i need to add one additional stack to make this prog work. the complexity will be O(N^2).
void spiral(st *root)
{
	int size_level,level=1;
	queue<st*> q;
	q.push(root);

	while(1	)
	{
		size_level=q.size();
		if(size_level==0)
			break;

		while(size_level>0)
		{
			st *temp=q.front();
			q.pop();
			cout<<temp->data<<"level "<<level<<" ";
			--size_level;
			
			
				if(temp->left)
					q.push(temp->left);
				if(temp->right)
					q.push(temp->right);
			
			
		}
		++level;
	}
}

int main()
{
	 struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);

    spiral(root);

	return 0;
}
