#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;

	cin>>n>>m;
	int pos[m]=0;

	while(n--)
	{

		int a,b;
		cin>>a>>b;
		
		for(int i=a;i<=b;i++)
		{
			pos[i]=1;
		}

	}

	int count=0;
	for(int i=1;i<=m;i++)
	{
		if(pos[i]==0)
		{
			count+=1;
		}
	}

	cout<<count<<endl;
	for(int i=1;i<=m;i++)
	{
		if(pos[i]==0)
		{
			cout<<i<<" ";
		}
	}
		
}