/*Check if all leaves are at same level
Given a Binary Tree, check if all leaves are at same level or not.

          12
        /    \
      5       7       
    /          \ 
   3            1
  Leaves are at same level

          12
        /    \
      5       7       
    /          
   3          
   Leaves are Not at same level
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

st *newnode(ll data)
{
	st *temp = (st*)malloc(sizeof(st));

	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}

bool levelcheck(st *root)
{
	queue <node*> q;
	q.push(root);

	ll levelsize;
	ll curr=-1;
	ll ans=1;
	bool final=true;
	while(1)
	{
		levelsize=q.size();

		if(levelsize==0)
			break;

		while(levelsize>0)
		{
			st *temp =q.front();
			q.pop();

			if(temp->left)
				q.push(temp->left);

			if(temp->right)
				q.push(temp->right);

				--levelsize;

				if(temp->left==NULL and temp->right == NULL)
				{
					if(curr==-1)
						curr=ans;
					else
						if(curr!=ans)
							final=false;
				}
		}
		++ans;
	}
	return final;
}

int main()
{
	struct node *root = newnode(12);
    root->left = newnode(5);
    root->left->left = newnode(3);
    root->left->right = newnode(9);
    root->left->left->left = newnode(1);
    root->left->right->left = newnode(1);
    root->right=newnode(34);
    if(levelcheck(root))
    	cout<<"Yes";
    else
    	cout<<"No";

	return 0;

}