#include <bits/stdc++.h>

using namespace std;

void push(int *&ptr,int x) // passing ptr by referrence 
{
	ptr=ptr+1;
	*ptr=x;
	
	// cout<<ptr<<endl;
}

void pop(int *&ptr) // need to check empty condition
{
	ptr=ptr-1;
}
int main()
{
	int arr[100]={0};

	int *ptr=arr; //assigning a pointer 
	push(ptr,1);
	push(ptr,2);
	push(ptr,3);
	push(ptr,112);
	
	push(ptr,12);

	cout<<*ptr<<endl;
	pop(ptr);
	cout<<*ptr<<endl;



}