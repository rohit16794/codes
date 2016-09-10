#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll val;
struct node 
{
	ll data;
	struct node *left,*right;
};

struct node* newnode(ll data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;

	temp->left=temp->right=NULL;

	return temp;
}
ll path[100000];
void func(struct node *root,ll *path,ll pathlen)
{
	if(root==NULL)
		return;

	if(root->data==val)
	{
		for(ll i=0;i<pathlen;i++)
			cout<<path[i]<<" ";
	}

	path[pathlen++]=root->data;

	func(root->left,path,pathlen);
	func(root->right,path,pathlen);
}

int main()
{
	struct node *root=NULL;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->left->left->left=newnode(7);
val=7;
	func(root,path,0);
	return 0;
}