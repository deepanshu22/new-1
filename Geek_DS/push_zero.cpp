#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;

	cin>>t;

	while(t--)
	{
		cin>>n;

		int arr[n];

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		int count=0;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]==0)
				continue;
			else
			{
				int temp=arr[count];
				arr[count]=arr[i];
				arr[i]=temp;
				count+=1;
			}
		}
	for(int i=0;i<n;i++)
	{
	
		cout<<arr[i]<<" ";
	}

	}
}	