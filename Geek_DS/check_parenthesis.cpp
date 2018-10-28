#include <bits/stdc++.h>

using namespace std;

int main()
{
	stack<char> s1;

	char arr[1000005];
	ios_base::sync_with_stdio(false);
	// cin>>arr;
	long long int count=0;
	// for(int i = 0; i < strlen(arr); ++i)
	// {
	// 	if(arr[i]=='(')
	// 	{
	// 		s1.push(arr[i]);
	// 		// cout<<s1.top();
	// 	}
	// 	if(arr[i]==')' && s1.empty()!=1)
	// 	{
	// 		char temp=s1.top();
	// 		// cout<<temp<<" yye";
	// 		if(temp=='(')
	// 		{
	// 			s1.pop();
	// 			count+=2;
	// 			// cout<<"Yes";
	// 		}
	// 		else
	// 			break;
	// 	}
	// }
	char a;
	while((a=getchar()))
	{
		if(a=='\n' || a=='\0')
			break;
		if(a=='(')
		{
			s1.push(a);
			// cout<<s1.top();
		}
		if(a==')' && s1.empty()!=1)
		{
			char temp=s1.top();
			// cout<<temp<<" yye";
			if(temp=='(')
			{
				s1.pop();
				count+=2;
				// cout<<"Yes";
			}
			else
				break;
		}
	}
	cout<<count<<'\n';
}