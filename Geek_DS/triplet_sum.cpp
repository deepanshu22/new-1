#include <bits/stdc++.h>

using namespace std;

bool triplet_sum(int arr[],int target,int n)
{
	sort(arr,arr+n);

	// for(int i=0;i<n;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	int l=0,r=0;
	for (int i = 0; i < n-2; ++i)
	{
		l=i+1;
		r=n-1;

		while(l<r)
		{
			if(arr[i]+arr[l]+arr[r]==target)
			{
				cout<<"haha"<<endl;
				return true;
			}
			else if(arr[i]+arr[l]+arr[r]<target)
			{	
				l++;
			}
			else
			{	r--;

			}
		}
	}

	return false;
}

int main()
{
	int t,n,target;

	cin>>t;

	while(t--)
	{
		cin>>n;

		int arr[n];
		cin>>target;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		bool res=triplet_sum(arr,target,n);

		cout<<res<<endl;

	}

}