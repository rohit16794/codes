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
	st* temp=(st*)malloc(sizeof(st));

	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}

ll height(st* root)
{
	ll lheight,rheight;

	if(root==NULL)
	{
		return 0;
	}
	else
	{
		lheight=height(root->left);
		rheight=height(root->right);

		if(lheight>rheight)
			return lheight+1;
		else
			rheight+1;
	}
}

ll diameter(st *root)
{
	ll ans;
	if(root==NULL)
	{
		return 0;
	}
	
	ll lheight,rheight;
	lheight=height(root->left);
	rheight=height(root->right);

	ll ldiam=diameter(root->left);
	ll rdiam=diameter(root->right);

	return max(lheight+rheight+1,max(ldiam,rdiam));

}

int check(st* node,int subsum)
{
	
	if(node==NULL)
		{
			return (subsum==0);
		}

	else
	{
		bool ans=0;

		int sum=subsum - node->data;

		if(sum==0 && node->left==NULL && node->right==NULL)
		{
			return 1;
		}

		if(node->left)
		{
			ans=ans || check(node->left,sum);
		}

		if(node->right)
		{
			ans=ans || check(node->right,sum);
		}
	return ans;
	}
}

bool hasPathSum(struct node* node, int sum)
{
  /* return true if we run out of tree and sum==0 */
  if (node == NULL)
  {
     return (sum == 0);
  }
  
  else
  {
    bool ans = 0;  
  
    /* otherwise check both subtrees */
    int subSum = sum - node->data;
  
    /* If we reach a leaf node and sum becomes 0 then return true*/
    if ( subSum == 0 && node->left == NULL && node->right == NULL )
      return 1;
  
    if(node->left)
      ans = ans || hasPathSum(node->left, subSum);
    if(node->right)
      ans = ans || hasPathSum(node->right, subSum);
  
    return ans;
  }
}

int main()
{
	st *root=NULL;

	root=newnode(10);
	root->left=newnode(8);
	root->right=newnode(2);
	root->left->left=newnode(3);
	root->left->right=newnode(5);




	cout<<check(root,21);
	cout<<hasPathSum(root,21);

	return 0;
}