#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct node st;
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
ll maxi=0;

ll levelno(struct node *root,ll val)
{
	if(root==NULL)
		return 0;

	ll ans=1;
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

			if(temp->data==val)
			{
				return ans;
			}

			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);


		--levelsize;
		}
		++ans;
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

	//levelorder(root);
	cout<<levelno(root,1);


	return 0;
}