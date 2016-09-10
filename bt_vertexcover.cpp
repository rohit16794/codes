// Vertex Cover problem.

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

ll vertex_cover(st *root)
{
	if(root==NULL)
		return 0;

	if(root->left==NULL and root->right==NULL)
		return 0;

	if(root->vc!=0)
		return root->vc;

	int incl;

	incl = 1 + vertex_cover(root->left) + vertex_cover(root->right);

	int excl=0;
	if(root->left)
	excl += 1 + vertex_cover(root->left->left)+ vertex_cover(root->left->right);
	if(root->right)
		excl+=1+ vertex_cover(root->right->left)+ vertex_cover(root->right->right);

	root->vc= min(incl,excl);

	return root->vc;
	
}

int main()
{
	struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);

    cout<<vertex_cover(root);
 
	return 0;
}