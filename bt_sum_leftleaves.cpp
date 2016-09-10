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

st* newNode(int data)
{
	st *temp =(st*)malloc(sizeof(st));
	temp->data=data;

	temp->left=temp->right=NULL;

	return temp;
}

void inorder(st *root)
{
	if(!root)
		return;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void sum_leftleaves(st *root)
{
	static int res=0;
	if(!root)
		return;
		//return 0;

	if(root->left)
	{
		if(!root->left->left and !root->left->right)
			{
				//cout<<root->left->data<<" ";
				res+=root->left->data;//<<" ";
				//return root->left->data;
	
		}
	}
	sum_leftleaves(root->left);
	sum_leftleaves(root->right);
	cout<<res;
	//return sum_leftleaves(root->left)+sum_leftleaves(root->right);
}

int main()
{struct node *root         = newNode(20);
    root->left                = newNode(9);
    root->right               = newNode(49);
    root->right->left         = newNode(23);
    root->right->right        = newNode(52);
    root->right->right->left  = newNode(50);
    root->left->left          = newNode(5);
    root->left->right         = newNode(12);
    root->left->right->right  = newNode(12);

 //   deletepath(root,45);//,100);

   sum_leftleaves(root);
 
	return 0;
}
