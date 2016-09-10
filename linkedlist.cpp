#include <bits/stdc++.h>
using namespace std;

struct node 
{	
	int data;
	struct node *next;
};

node *newnode(int data)
{

	node *p;
	p=(node*)malloc(sizeof(struct node));
	
	p->data=data;
	p->next=NULL;
	return p;
}

void traverse(struct node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main()
{
	node *head=NULL;
	node *newptr=NULL;
	newptr=(node*)malloc(sizeof(struct node));
	
int d,n;
cin>>n;

while(n--)
{
	cin>>d;
	newptr=newnode(d);
	if(head==NULL)
		head=newptr;
	else
	{
		newptr->next=head;
		head=newptr;
	}
}
	traverse(head);
	cout<<head->data;

	return 0;
}