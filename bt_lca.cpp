/*
Lowest Common Ancestor in a Binary Tree | Set 1
Given a binary tree (not a binary search tree) and two values say n1 and n2, write a program to find the least common ancestor.

Following is definition of LCA from Wikipedia:
Let T be a rooted tree. 
The lowest common ancestor between two nodes n1 and n2 is defined as the lowest node in T that has both n1 and n2 as 
descendants (where we allow a node to be a descendant of itself
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node st;
ll  check;
struct node
{
	ll data;
	st *left,*right;
};

st *newNode(ll data)
{
	st *temp = new node ();
	temp->left=temp->right=NULL;
	temp->data=data;

	return temp;
}

vector <ll> v,u;
bool flag;

void com_ancestor(st *root,vector <ll> p,ll key)
{
	if(root==NULL)
		return;
	//if(flag==false)
	p.push_back(root->data);

	if(root->data==key)
	{
	//	flag=true;
		for(ll j=0;j<p.size();j++)
			{	if(check==1)
				v.push_back(p[j]);
				else
					u.push_back(p[j]);
			}
		return;
	}

	com_ancestor(root->left,p,key);
	com_ancestor(root->right,p,key);

	return;

}


int main()
{

	node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    flag=false;
    check=1;
    com_ancestor(root,v,4);
    flag=false;
    check=0;
    com_ancestor(root,u,6);
    ll i;
    for(i=0;i<v.size()&&i<u.size();i++)
    {
    //cout<<v[i]<<" "<<u[i]<<"\n";
    	if(v[i]!=u[i])
    		break;
    	//cout<<u[i];//<<" "<<u[i];
    	//cout<<"\n";
    }



    cout<<v[i-1];



	return 0;
}

