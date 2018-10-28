#include <bits/stdc++.h>

using namespace std;


int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int trap(int arr[],int n)
{
	int left[n];
	int right[n];

	left[0]=arr[0];
	right[n-1]=arr[n-1];

	for(int i=1;i<n;i++)
	{
		left[i]=max(left[i-1],arr[i]);
	}

	for(int i=n-2;i>-1;i--)
	{
		right[i]=max(right[i+1],arr[i]);
	}

	for(int i=0;i<n;i++)
	{
		// cout<<left[i]<<" ";
	}
	// cout<<endl;
	for(int i=0;i<n;i++)
	{
		// cout<<right[i]<<" ";
	}
	int water=0;
	for (int i = 0; i < n; ++i)
	{
		// cout<<water<<endl;
		water+=min(left[i],right[i])-arr[i];
	}
	return water;

}

int main()
{
	int n;

	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int cum=trap(arr,n);
	cout<<cum<<endl;

}