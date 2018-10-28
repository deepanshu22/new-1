#include "bits/stdc++.h"

using namespace std;

void print_stack(stack <int>sg)
{
	stack<int> temp=sg;
	cout<<temp.empty()<<endl;
	while(!temp.empty())
	{
		// cout<<temp.top()<<" ";
		temp.pop();
	}
	cout<<temp.empty()<<endl;
}

int main()
{
	stack<int> sg;

	sg.push(1);
	sg.push(2);
	sg.push(3);

	// sg.pop();
	// cout<<sg.top()<<" No size: "<<sg.size()<<endl;

	print_stack(sg);
}