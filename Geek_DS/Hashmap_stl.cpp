#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<string,int> h1;

	h1.insert(make_pair("Milk",28));
	h1.insert(make_pair("Bread",18));
	h1.insert(make_pair("Soya",20));
	h1.insert(make_pair("Chips",10));
	h1.insert(make_pair("Butter",15));
	cout<<"Enter the no. of items "<<endl;

	int n;
	cin>>n;

	vector<string> str_inp;
	vector<int> cost_inp;
	for(int i=0;i<n;i++)
	{
		int b;
		string a;

		cin>>a;
		cin>>b;
		str_inp.push_back(a);
		cost_inp.push_back(b);
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		string temp_str = str_inp[i];
		int temp_int ;
		temp_int = h1.find(temp_str)->second;
		if(temp_int != cost_inp[i])
		{
			count+=1;
		}

	}

	cout<<count<<endl;
}