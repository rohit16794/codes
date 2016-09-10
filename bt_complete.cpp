// Check whether a BT is complete tree or not.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node st;

struct node
{
	ll data,vc;;
	st *left,*right;
};

st *newNode(ll data)
{
	st *temp = new node();
	temp->data=data;
	temp->vc=0;
	temp->left=temp->right=NULL;

	return temp;
}

bool complete(st *root)
{
	if(root==NULL)
		return true;

	if(root->left==NULL and root->right== NULL)
		return true;

	if((root->left==NULL and root->right!=NULL) or (root->left!=NULL and root->right==NULL))
		return false;

	return (complete(root->left) and complete(root->right));
}


int main()
{
	struct node* root = NULL;
    root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    //cout<<vertex_cover(root);
 	if(complete(root))
 		cout<<"yes";
 	else
 		cout<<"no";
	return 0;
}