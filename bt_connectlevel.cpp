#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct node st;

struct node 
{
	ll data;
	st *left,*right,*nextright;
};

st* newnode(ll data)
{
	

	st *temp=(st*)malloc(sizeof(st));

	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}
queue <st *> q;
void nextright(st* node)
{
	ll levelsize;
	q.push(node);

	while(1)
	{
		levelsize=q.size();

		if(levelsize==0)
			break;

		while(levelsize>0)
		{
			st* temp = q.front();
			q.pop();

			if(temp->left)
				q.push(temp->left);

			if(temp->right)
				q.push(temp->right);
			
			if(levelsize==1)
				temp->nextright=NULL;
			else
				temp->nextright=q.front();

			--levelsize;
		}
	}
}

int main()
{	
	st *root =NULL;

	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->left->left->left=newnode(7);

	nextright(root);

	st *tp =  root->left->left->nextright;

	cout<<tp->data;


	return 0;
}



