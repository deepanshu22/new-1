#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int Data;
	struct Node* next;

};


void push(struct Node** head,int n)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->Data=n;
	temp->next=*head;
	*head=temp;
}

void swap_ind(struct Node* head,int k1,int k2)
{
	struct Node* temp1,*temp2,*inter,*itr;
	itr=head;
	while(itr!=NULL)
	{
		if(itr->Data==k1 )
		{
			temp1=itr;
			// cout<<"he";
		}
		if(itr->Data==k2)
		{
			temp2=itr;
			// cout<<"loop";
		}
		itr=itr->next;
	}
	// cout<<temp1->Data<<" "<<temp2->Data<<endl;
	inter=temp1;
	temp1=temp2;
	temp2=inter;

	// cout<<temp1->Data<<" "<<temp2->Data<<endl;
	while(head!=NULL)
	{
		if(head->Data==k1 )
		{
			head=temp1;
			cout<<temp1->Data<<" "<<head->Data<<endl;
			// cout<<"he";
		}
		if(head->Data==k2)
		{
			head=temp2;
			// cout<<"loop";
		}
		head=head->next;
	}
}

void printlist(struct Node * head)
{
	while(head!=NULL)
	{
		cout<<head->Data<<" ";
		head=head->next;
	}
}
int main()
{
	struct Node* head = NULL;
	int inp=0;
	cin>>inp;

	for (int i = 1; i <= inp; ++i)
	{
		// cout<<"hel";
		push(&head,i);
	}
	int a ,b;
	cin>>a>>b;
	swap_ind(head,a,b);
	printlist(head);




}