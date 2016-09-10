/*Check whether a given Binary Tree is Complete or not*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct node st;

struct node 
{
	ll data;
	st *left,*right;
};

st* newnode(ll data)
{
	st *temp = (st*)malloc(sizeof(st));

	temp->data=data;

	temp->left=temp->right=NULL;

	return temp;
}

bool func(st *root)
{
	queue <node *> q;
	q.push(root);
	bool nonfull,ans;
	nonfull = false;
	ans=true;

	ll levelsize;

	while(1)
	{
		levelsize=q.size();
		if(levelsize==0)
			break;

		while(levelsize>0)
		{
			st *temp = q.front();
			q.pop();
			if(temp->left)
				q.push(temp->left);

			if(temp->right)
				q.push(temp->right);

			if(temp->left==NULL and temp->right!=NULL)
			{
				levelsize=0;
				ans=false;
				break;
			}
			if((temp->left == NULL and temp->right!=NULL ) or (temp->left!=NULL and temp->right==NULL))
			{
				if(nonfull==false)
				{
					nonfull=true;
				}
				else
				{
					ans=false;levelsize=0;
					break;
				}
			}
		--levelsize;
		}
	}
	return ans;
}

int main()
{
	struct node *root  ;//
	root=newnode(1);
  root->left         = newnode(2);
  root->right        = newnode(3);
  root->left->left   = newnode(4);
  root->left->right  = newnode(5);
  root->right->right = newnode(6);
  root->right->left = newnode(6);
  if(func(root))
  	cout<<"complete";
  else
  	cout<<"not complete";

  return 0;
}