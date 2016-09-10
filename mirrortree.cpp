#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct node st;

struct node 
{
	ll data;
	st *left,*right;
};

void inorder(struct node *root)
{
	if(root==NULL)
		return ;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

st* newnode(ll data)
{
	st* temp;
	temp=(st*)malloc(sizeof(st));
	temp->data=data;

	temp->left=temp->right=NULL;

	return temp;
}

void swap_tree(st* root)
{
	if(root==NULL)
	{
		return;
	}

	swap_tree(root->left);
	swap_tree(root->right);

	st* temp;
	temp=root->left;
	root->left=root->right;
	root->right=temp;
}
ll c;
void count(st* root)
{	
	if(root==NULL)
		return ;

	if(root->left==NULL && root->right==NULL)
	{
		++c;
	}
	count(root->left);
	count(root->right);

}

int main()
{
	st* root=NULL;
	root=(st*)malloc(sizeof(st));

	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(5);
	root->left->left=newnode(3);
	root->left->right=newnode(4);
	root->right=newnode(5);
	root->right->left=newnode(6);

	//inorder(root);cout<<"\n";
	//swap_tree(root);
	//inorder(root);cout<<"Hahahah";
	count(root);
	cout<<c;
	
	return 0;
}