// Program to show insertion and deletion in a Binary Search Tree.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node st;

struct node
{
	ll data;
	st *left,*right;
};

st *newNode(ll data)
{
	st *temp=new node();
	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}

st *insert(st *root,ll key)
{
	if(root==NULL)
	{
		return newNode(key);
	}
	if(key<root->data)
		root->left=insert(root->left,key);
	else
		root->right=insert(root->right,key);

	return root;
}

st *findmin(st *root)
{
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}

st *deletenode(st *root,ll key)
{
	if(!root)
		return root;

	if(key<root->data)
	{
		root->left=deletenode(root->left,key);
	}
	else
		if(key>root->data)
		{
			root->right=deletenode(root->right,key);
		}
		else // key has been found :D 
		{
			if(root->left==NULL)
			{
				st *temp = root->right;
				free(root);
				return temp;
			}
			if(root->right==NULL)
			{
				st *temp = root->left;
				free(root);
				return temp;
			}
			st *temp= findmin(root->right);

			root->data=temp->data;
			root->right=deletenode(root->right,temp->data);

		}
		return root;
}

void inorder(st *root)
{
	if(!root)
		return;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


int main()
{
	struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    inorder(root);
    root=deletenode(root,70);
    cout<<"\n";
    inorder(root);

	return 0;
}