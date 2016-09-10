#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;
typedef struct node st;

struct node
{
	int data;
	st *left,*right;
};

st *newNode(int data)
{
	st *temp=(st *)malloc(sizeof(st));
	temp->data=data;
	temp->left=temp->right=NULL;

	return temp;
}

int width_max(st *root)
{
	if(!root)
		return 0;

	queue<st *> q;
	q.push(root);

	int level,width=-1;

	while(1)
	{
		level=q.size();
		if(level==0)
			break;

		if(level>width)
			width=level;

		while(level>0)
		{
			st *temp = q.front();
			q.pop();

			if(temp->left)
				q.push(temp->left);

			if(temp->right)
				q.push(temp->right);
			--level;
		}
	}
	return width;
}

int sum_tree(st *root)
{
	int left_data=0,right_data=0;
	if(!root)
		return 0;

	left_data=sum_tree(root->left);
	right_data=sum_tree(root->right);

	int temp=root->data;
	root->data=left_data+right_data;
	return temp+root->data;

}

void inorder(st *root)
{
	if(!root)
		return ;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{ struct node *root = NULL;
 // int x;
 
  /* Constructing tree given in the above figure */
  root = newNode(10);
  root->left = newNode(-2);
  root->right = newNode(6);
  root->left->left = newNode(8);
  root->left->right = newNode(-4);
  root->right->left = newNode(7);
  root->right->right = newNode(5);

  sum_tree(root);

  inorder(root);
 
	return 0;
}
