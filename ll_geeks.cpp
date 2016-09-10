#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef unsigned long long ull;
#define rep(i,n) for(ll i=0;i<n;i++)
#define INF INT_MAX
typedef pair<ll,ll> pii;

struct node 
{
	int data;
	struct node *next;
};

struct node* addnode(struct node *head,int data)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));

	temp->data=data;temp->next=NULL;

	head = temp;

	return head;
}

void middle(struct node *head)
{
	int len=0;

	struct node *temp=head;

	while(temp!=NULL)
	{
		++len;
		temp=temp->next;
	}


	cout<<len;
}

int main()
{
	struct node *head=NULL;
	head= addnode(head,5);
	head= addnode(head,4);
	head= addnode(head,3);
	head= addnode(head,2);
	head= addnode(head,1);

	middle(head);
	return 0;
}
