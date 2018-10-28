#include <bits/stdc++.h>

using namespace std;

void Seperate(int arr[],int n)
{
	int right=n-1,left=0;

	while(left<right)
	{
		while(arr[left]==0 && left<right)
			left+=1;
		while(arr[right]==1 && left<right)
			right-=1;

		if(left<right)
		{
			int temp =arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int arr[100];

	int n;

	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	Seperate(arr,n);
}