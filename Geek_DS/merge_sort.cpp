#include <bits/stdc++.h>

using namespace std;


void merge(int arr[], int l[],int r[],int nl,int nr)
{
	int i=0,j=0,k=0;

	while(i<nl && j<nr)
	{
		if(l[i]<=r[j])
		{
			
			arr[k]=l[i];
			i+=1;
		}
		else
		{
			arr[k]=r[j];
			j+=1;
		}
		k+=1;
	}

	while(i<nl)
	{
		arr[k]=l[i];
		k+=1;
		i+=1;
	}
	while(j<nr)
	{
		arr[k]=r[j];
		k+=1;
		j+=1;
	}
}

void merge_sort(int arr[], int n)
{
	if(n<2)
		return;

	int nl = n/2;
	int nr = n-nl;

	int l[nl],r[nr];
	// cout<<nl<<" "<<nr<<endl;
	for(int i=0;i<nl;i++)
	{
		l[i]=arr[i];
	}
	int j=0;
	for(int i=nl;i<n;i++)
	{
		r[j]=arr[i];
		j+=1;
	}

	merge_sort(l,nl);
	merge_sort(r,nr);
	merge(arr,l,r,nl,nr);
}
int main()
{
	int n;

	cin>>n;

	int arr[n+1];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	
	merge_sort(arr,n);

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

}