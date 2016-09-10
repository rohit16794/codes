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
	int key;
	st *left,*right;
};

st *newNode(int data)
{
	st *temp=(st*)malloc(sizeof(st));

	temp->key=data;
	temp->left=temp->right=NULL;

	return temp;
}

st *insert(st *root,int key)
{
	if(!root)
		return newNode(key);

	if(key<root->key)
	{
		root->left=insert(root->left,key);
	}
	if(key>root->key)
		root->right=insert(root->right,key);

	return root;
}

void k_smallest(st *root,int *n,int k)
{
	if(!root){
		//cout<<"hello";
		return;
	}
	k_smallest(root->right,n,k);
	(*n)++;
	if(k==(*n))
	{cout<<root->key;
		return;}
//cout<<"root"; 
	k_smallest(root->left,n,k);
}
int main()
{
	st *root=NULL;
	root=insert(root,20);
	insert(root,8);
	insert(root,22);
	insert(root,4);
	insert(root,12);
	insert(root,10);
	insert(root,14);
	int n=0;
	k_smallest(root,&n,2);

	return 0;
}
