#include <bits/stdc++.h>

using namespace std;


struct Node
{
	int data;
	struct Node* next;	
};


void print_list(struct Node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}
int main()
{
	struct Node* head=NULL;
	struct Node* Second=NULL;
	struct Node* Third=NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	Second =(struct Node*)malloc(sizeof(struct Node));
	Third = (struct Node*)malloc(sizeof(struct Node));

	head->data=1;
	head->next=Second;

	Second->data=2;
	Second->next=Third;

	Third->data=3;
	Third->next=NULL;

	print_list(head);
}