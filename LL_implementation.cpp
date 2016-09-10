// Linked list implementation

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct linked st;
struct linked
{
	ll  data;
	linked *next;
};

st *head=NULL;

void insert_head(st **head,ll data)
{
	st *temp= new linked();

	temp->data=data;

	temp->next=*head;
	
	*head=temp;

	//return *head;
}

void traverse(st *head,int n)
{
	int c=0;
	while(head!=NULL)
	{
		//++c;
		//if(c==n)
		cout<<head->data<<" ";
		
		head=head->next;
	}
}

void reverse(st *first,st *rest)
{
	if(rest==NULL)
	{
		head=first;
		//cout<<first->data;
		return;		
	}
	reverse(rest,rest->next);
	rest->next=first;
}
int main()
{

		int n=3;
	insert_head(&head,20);
	insert_head(&head,4);
	insert_head(&head,15);
	insert_head(&head,35);

	reverse(NULL,head);
	traverse(head,n);

	return 0;
}