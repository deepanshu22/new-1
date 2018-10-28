#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s ="abc f f l";
	int count=0;
int size=s.length()+3*count;
	// cout<<size<<endl;

	vector<char> v;

	for (int i = 0; i <s.length() ; ++i)
	{
		if (s[i]==' ')
		{
			v.push_back('%');
			v.push_back('2');
			v.push_back('0');
		}
		else
			v.push_back(s[i]);
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i];
	}
	printf("\n");
	string str(v.begin(),v.end());
	cout<<str<<endl;
	

}