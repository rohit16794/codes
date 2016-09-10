#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct node 
{
	ll data;
	struct node *left,*right;
};

struct node* newnode(ll data)
{
	struct node* current = (struct node*)malloc(sizeof(struct node));

	current->data=data;
	current->left=NULL;
	current->right=NULL;

	return current;

} 

ll height(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		ll lheight=height(root->left);
		ll rheight=height(root->right);

		if(lheight>rheight)
		{
			return (1+lheight);
		}
		else
			return (1+rheight);

	}
}

void currentlevel(struct node *curr,ll level)
{
	if(curr==NULL)
	return;
	
	if(level==1)
	{
		cout<<curr->data<<" ";
	}	
	else
	{
		currentlevel(curr->left,level-1);
		//cout<<"\n";
		currentlevel(curr->right,level-1);
		//		cout<<"\n";
	}
}

void levelorder(struct node *root)
{
	ll h=height(root);

	for(ll i=1;i<=h;i++)
	{
		currentlevel(root,i);
		cout<<"\n";
	}
}

int main()
{
	struct node* root=NULL;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);

	root->left->left=newnode(4);
	root->left->right=newnode(5);

	levelorder(root);



	return 0;
}