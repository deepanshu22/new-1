#include <bits/stdc++.h>

using namespace std;


struct Bstnode{
	int data;
	Bstnode* left;
	Bstnode* right;
};

Bstnode* GetnewNode(int data)
{
	Bstnode* newnode = new Bstnode();
	newnode->data=data;
	newnode->right=newnode->left=NULL;
	return newnode;
}


Bstnode* Insert(Bstnode* root,int data)
{
	if(root==NULL)
	{
		root=GetnewNode(data);
	}
	else if(root->data>= data)
	{
		root->left=Insert(root->left,data);
	}
	else
		root->right=Insert(root->right,data);

	return root;
}

bool search(Bstnode* root,int data)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==data)
		return true;
	else if(root->data > data)
		return search(root->left,data);
	else
		return search(root->right,data);
}
int main()
{
	Bstnode* root=NULL;

	root =Insert(root,15);
	root =Insert(root,25);
	root =Insert(root,1);
	root =Insert(root,13);

	if(search(root,9)==true)
	{
		cout<<"found"<<'\n';
	}
	else
		cout<<"NO"<<'\n';
}