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
		int sum=0;

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		cout<<sum<<endl;
		if(sum%2==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}