#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int Data;
	struct Node* next;
};



void push(struct Node** head,int key)
{	
	
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->Data=key;
	temp->next=*head;
	
	*head=temp;
}

void Delete(struct Node** head,int key)
{
	struct Node* temp=*head,*prev;

	if(temp!=NULL && temp->Data==key)
	{
		prev=temp->next;
		*head=prev;
		free(temp);
		return;

	}
	while(temp->Data!=key && temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
		// cout<<temp<<endl;
	}
	cout<<temp<<endl;
	if(temp==NULL)
	{
		cout<<"Sorry not in the list";
		return;
	}
	prev->next=temp->next;

	free(temp);
}
void deleteNode(struct Node **head_ref, int key)
{
    // Store head node
    struct Node* temp = *head_ref, *prev;
 
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->Data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
 
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->Data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
    {
    	cout<<"Not in the list"<<endl;
    	return;	
    }
    
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    free(temp);  // Free memory
}
void printlist(struct Node* n)
{

	while(n!=NULL)
	{	
		cout<<n->Data<<" ";
		n=n->next;
	}
}
int main()
{
	struct Node* head = NULL;
	cout<<&head<<endl;
	int inp;
	cout<<"Enter Number of Elements in a linked list :";
	cin>>inp;

	for (int i = 1; i <= inp; ++i)
	{
		push(&head,i);
	}
	// cout<<head->next<<endl;
	// printlist(head);
	// printf("\n");
	cout<<"Enter the no. to be deleted ";
	int temp1;
	cin>>temp1;
	deleteNode(&head,temp1);
	// Delete(&head,temp1);
	printlist(head);
	printf("\n");

}