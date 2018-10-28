#include <bits/stdc++.h>

using namespace std;

struct node{

int data;
struct node* next;

};

void push(struct node** head,int data)
{
	struct node* temp = new node();

	temp->data=data;
	temp->next=*head;
	*head=temp;
}

void print(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void count(struct node* head)
{
	int count=0;
	struct node* temp=head;
	while(temp->next!=NULL)
	{
		count++;
		temp=temp->next;
	}

	cout<<count+1<<endl;
}

int count_recur(struct node* head)
{
	if(head==NULL)
		return 0;
	return 1+count_recur(head->next);

}

struct node* merge(struct node* a,struct node* b,struct node* res1)
{
	
	struct node* res =NULL;
	struct node* temp_a=a;
	struct node* temp_b=b;
	// cout<<"ahaaa";
	while(temp_a!=NULL && temp_b!=NULL)
	{
		// cout<<"aha";
		if(temp_a->data < temp_b->data)
		{
			push(&res,temp_a->data);
			// cout<<temp_a->data<<" ";
			temp_a=temp_a->next;
		}
		else
		{
			push(&res,temp_b->data);
			// cout<<temp_a->data<<" ";n
			temp_b=temp_b->next;
		}
	}

	while(temp_a!=NULL)
	{
		push(&res,temp_a->data);
		temp_a=temp_a->next;
	}
	while(temp_b!=NULL)
	{
		push(&res,temp_b->data);
		temp_b=temp_b->next;
	}

	res1=res;
	return res1;
}

int main()
{
	int n;
	struct node* head1;
	struct node* head2 ;
	struct node* res=NULL;
	cout<<"Enter no. of elements : "<<endl;
	cin>>n;

	push(&head1,6);
	push(&head1,5);
	push(&head1,4);
	push(&head1,1);

	// push(&head1,i);
	// for(int i=0;i<n;i++)
	// {
	// 	push(&head1,i);
	// }

	push(&head2,10);
	push(&head2,9);
	push(&head2,8);
	push(&head2,7);
	push(&head2,3);


	// print(head1);
	// print(head2);
	// count(head);
	// int count=count_recur(head1);
	// cout<<count<<endl;

	res=merge(head1,head2,res);
	print(res);
}