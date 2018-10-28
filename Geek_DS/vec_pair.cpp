#include <bits/stdc++.h>

using namespace std;

bool sortcheck(const pair<int,int> &a,const pair<int,int> &b)
{
	if(a.first==b.first)
	{
		return a.second<b.second;
	}
	// return a.first>b.first; 
}

int main()
{
	int n;

	cin>>n;

	int a,b;

	vector<pair<int,int> >v1;
 
	for (int i = 1; i <= n; ++i)
	{
		cin>>a>>b;
		v1.push_back(make_pair(a,b));
	}
	sort(v1.begin()+2,v1.end()-1,sortcheck);
	for (int i = 0; i < n; ++i)
	{
		cout<<v1[i].first<<" "<<v1[i].second<<" ";
		printf("\n");
	
	}
}