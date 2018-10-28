#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[4][4];
	int cop[4][4];
	int p=1;
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <=3; ++j)
		{
			arr[i][j]=p;
			p+=1;
		}
	}

	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <=3; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		printf("\n");
	}

	int k=1,l=1;
	for (int j = 3; j > 0; --j)
	{	l=1;
		for (int i = 1; i <=3; ++i)
		{
			cop[i][j]=arr[k][l];
			l+=1;
			// cout<<k<<" "<<l<<endl;
		}
		k+=1;
	}

	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <=3; ++j)
		{
			cout<<cop[i][j]<<" ";
		}
		printf("\n");
	}
}