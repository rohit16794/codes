#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct node st;

struct node
{
	ll data;
	struct node *left,*right;
};

st* newnode(ll data)
{
	struct node *temp= (st *)malloc(sizeof(st));

	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}

void sum_tree(st *node)
{
	if(node==NULL)
		return;

	sum_tree(node->left);
	sum_tree(node->right);
	ll ldata,rdata;
	if(node->left==NULL)
		ldata=0;
	else
		ldata=node->left->data;

	if(node->right==NULL)
		rdata=0;
	else
		rdata=node->right->data;


	if(ldata!=0 || rdata!=0)
		node->data=ldata+rdata;

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
		++ans;
	}
}


int main()
{
	struct node *root=NULL;
	root=newnode(10);
	root->left=newnode(-2);
	root->right=newnode(6);
	root->left->left=newnode(8);
	root->left->right=newnode(-4);
	root->right->left=newnode(7);
	root->right->right=newnode(5);

	sum_tree(root);
	level(root);
	return 0;
}

