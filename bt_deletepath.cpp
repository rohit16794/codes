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

st *deletepath(st *root,int sum)//,int k)
{
	if(!root)
		return root;

	
	root->left=deletepath(root->left,sum-root->data);//,k);
	root->right=deletepath(root->right,sum-root->data);//,k);

	if(!root->left and !root->right)
	{
		if(root->data<sum)
		{
			free(root);
			root=NULL;
		}
		return root;
	}

	
	return root;
}


int main()
{struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(12);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->left->left->right->left = newNode(13);
    root->left->left->right->right = newNode(14);
    root->left->left->right->right->left = newNode(15);

    deletepath(root,45);//,100);

    inorder(root);
 
	return 0;
}
