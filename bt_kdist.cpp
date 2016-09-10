//print the nodes at a distance k from the given node

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node st;

struct node
{
	ll data;
	st *left,*right;
};

st *newnode(ll data)
{
	st *temp = new node();

	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}


void print_k_down(st *root,ll k)
{
	if(root==NULL)
		return;
	if(k==0)
	{
		cout<<root->data<<"\n";
		return ;
	}
	print_k_down(root->left,k-1);
	print_k_down(root->right,k-1);
}

ll print_k_dist(st *root,st *target,ll k)
{
	if(root==NULL)
		return -1;

	if(root==target)
	{
		print_k_down(root,k);
		return 0;
	}

	ll dl= print_k_dist(root->left,target,k);

	if(dl!=-1)
	{
		if(dl+1==k)
		{
			cout<<root->data<<"\n";
		}
		else
			print_k_down(root->right,k-dl-2);

		return dl+1;
	}

	ll dr= print_k_dist(root->right,target,k);

	if(dr!=-1)
	{
		if(dr+1==k)
		{
			cout<<root->data<<"\n";
		}
		else
			print_k_down(root->left,k-dr-2);
	return dr+1;
	}
}

int main()
{
	 node * root = newnode(20);
    root->left = newnode(8);
    root->right = newnode(22);
    root->left->left = newnode(4);
    root->left->right = newnode(12);
    root->left->right->left = newnode(10);
    root->left->right->right = newnode(14);
    node * target = root->left->right;

    print_k_dist(root,target,2);
	return 0;
}
