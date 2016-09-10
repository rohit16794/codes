/*Convert a given tree to its Sum Tree
Given a Binary Tree where each node has positive and negative values. Convert this to a tree where each node contains the sum of the left and right sub trees in the original tree. The values of leaf nodes are changed to 0.

For example, the following tree

                  10
               /      \
	     -2        6
           /   \      /  \ 
	 8     -4    7    5
should be changed to

                 20(4-2+12+6)
               /      \
	   4(8-4)      12(7+5)
           /   \      /  \ 
	 0      0    0    0

   */

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

ll sumtree(st *root)
{
  if(root==NULL)
    return 0;
  
  ll old_data=root->data;

  root->data=sumtree(root->left)+sumtree(root->right);

  return root->data + old_data;

}

ll level(struct node *root)
{
  if(root==NULL)
    return 0;

  ll ans=0;
  queue<node *> q;
  q.push(root);

  ll levelsize;
  struct node *temp;
  while(1)
  {
    levelsize=q.size();
    if(levelsize==0)
      break;

    while(levelsize>0)
    {
      temp=q.front();
      q.pop();

      cout<<temp->data<<" ";

      if(temp->left)
        q.push(temp->left);
      if(temp->right)
        q.push(temp->right);


    --levelsize;
    }
//    ++ans;
  }
}


int main()
{
    st *root = NULL;
    //root=newnode(10);
    root = newnode(10);
  root->left = newnode(-2);
  root->right = newnode(6);
  root->left->left = newnode(8);
  root->left->right = newnode(-4);
  root->right->left = newnode(7);
  root->right->right = newnode(5);

  sumtree(root);
  level(root);

  return 0;
}