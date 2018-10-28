#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	

	cout<<"No of time you want it to be rotated ";
	int rot;
	cin>>rot;

	while(rot--)
	{	
		// int temp=arr[n-1];
		// for (int i = n-1; i >0 ; --i)
		// {
		// 	arr[i]=arr[i-1];
		// }
		// arr[0]=temp;
		int temp = arr[0];
		for (int i = 0; i <n-1 ; ++i)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=temp;
	}

	
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}